class Solution {
private:
    int gcd(int a, int b) {
        return std::gcd(a, b);
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* current = head;
        while (current->next) {
            int gcdValue = gcd(current->val, current->next->val);
            ListNode* newNode = new ListNode(gcdValue);
            newNode->next = current->next;
            current->next = newNode;
            current = newNode->next;
        }

        return head;
    }
};