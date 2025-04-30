/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* next_ptr = node->next;

        node->val = next_ptr->val;
        node->next = next_ptr->next;
        next_ptr->next = nullptr;
        delete next_ptr;
    }
};