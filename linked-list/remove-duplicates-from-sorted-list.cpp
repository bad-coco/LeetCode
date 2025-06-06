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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        ListNode* after = head;
        while (curr && curr->next) {
            after = curr->next;
           
            if (curr->val == after->val) {
                curr->next = after->next;
                after->next = nullptr;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};