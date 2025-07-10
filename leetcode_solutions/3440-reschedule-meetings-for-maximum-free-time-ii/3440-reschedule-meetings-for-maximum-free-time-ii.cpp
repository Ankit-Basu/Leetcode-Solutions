class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int n=startTime.size();
        vector<int>gaps(n+1);
        gaps[0]=startTime[0];
        for(int i=1;i<n;i++){
            gaps[i]=startTime[i]-endTime[i-1];
        }
        gaps[n]=eventTime-endTime[n-1];

        vector<int>preMax(n+1);
        for(int i=2;i<n+1;i++){
            preMax[i]=max(preMax[i-1],gaps[i-2]);
        }
        vector<int>sufMax(n+1);
        for(int i=gaps.size()-2;i>=0;i--){
            sufMax[i]=max(sufMax[i+1],gaps[i+1]);
        }
        int maxFree=0;
        for(int i=1;i<gaps.size();i++){
            int meetime=endTime[i-1]-startTime[i-1];
            if(meetime<=max(preMax[i],sufMax[i])){
                maxFree=max(maxFree,gaps[i-1]+gaps[i]+meetime);
            }
            maxFree=max(maxFree,gaps[i-1]+gaps[i]);
        }
        return maxFree;
    }
};