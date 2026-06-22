class Solution {
    public int fib(int n) {
        if(n<=1){
            return n;
        }

        int[] map = new int[n+1];
        map[0]=0;
        map[1]=1;

        for(int i =2; i<=n;i++){
            map[i]=map[i-2]+map[i-1];
        }
        return map[n];
    }
}