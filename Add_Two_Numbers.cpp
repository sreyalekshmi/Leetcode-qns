class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* l3 = head;
        int carry = 0;
        
        while (l1 || l2) {
            int value = carry;
            if (l1) {
                value += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                value += l2->val;
                l2 = l2->next;
            }
            carry = value / 10;
            l3->next = new ListNode(value % 10);
            l3 = l3->next;
        }
        if (carry) {
            l3->next = new ListNode(carry);
        }
        return head->next;
    }
};
