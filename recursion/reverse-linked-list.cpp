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
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* temp = head;
        ListNode* before = nullptr;
        ListNode* after = temp->next;

        while (temp) {
            after = temp->next;
            temp->next = before;
            before = temp;
            temp = after;
        }

        head = before;
        return head;
    }
};