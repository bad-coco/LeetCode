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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        int carry = 0;
        while (l1 || l2 || carry > 0) {
            int digit1 = l1 ? l1->val : 0;
            int digit2 = l2 ? l2->val : 0;
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            sum = sum % 10;
            ListNode* newNode = new ListNode(sum);
            temp->next = newNode;
            temp = temp->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return dummy->next;
    }
};