/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>arr;
        ListNode* curr = head;
        while(curr!=NULL){
            arr.push_back(curr->val);
            curr = curr->next;
        }
        int s = 0;
        int e = arr.size()-1;
        while(s<=e){
            if(arr[s]==arr[e]){  
                s++;
                e--;    
            }
            else{
                return false;
            }
           
            
        }
        return true;
    }
};