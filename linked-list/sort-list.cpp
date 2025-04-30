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

// 4, 2
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* curr = head;
        priority_queue<int, vector<int>, greater<int>> pq;
        while (curr) {
            pq.push(curr->val);
            curr = curr->next;
        }
        curr = head;
        while (curr) {
            curr->val = pq.top();
            pq.pop();
            curr = curr->next;
        }

        return head;
    }
};