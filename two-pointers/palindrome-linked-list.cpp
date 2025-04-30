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
        if (!head)
            return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        fast = head;
        ListNode* second = reverseList(slow);
        while(second)
        {
            if(fast->val!=second->val)
            {
                return false;
            }
            fast = fast->next;
            second = second->next;
        }
        return true;
    }

    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* after = curr->next;
        while (curr) {
            after = curr->next;
            curr->next = prev;
            prev = curr;
            curr = after;
        }

        return prev;
    }
};