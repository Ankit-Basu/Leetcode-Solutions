/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode dummy = new ListNode(-1);
        dummy.next = head;

        ListNode firstptr = dummy;
        ListNode lastptr = dummy;

        for(int i=0;i<n;i++){
            lastptr = lastptr.next;
        }
        while(lastptr.next!=null){
            firstptr = firstptr.next;
            lastptr= lastptr.next;
        }
        firstptr.next= firstptr.next.next;
        return dummy.next;
    }
}