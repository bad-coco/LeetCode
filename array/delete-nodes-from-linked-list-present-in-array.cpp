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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> mp;
        if (!head)
            return head;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            if (mp[curr->val] > 0) {
                if (prev == nullptr) {
                    head = curr->next;
                    curr = curr->next;
                } else {
                    prev->next = curr->next;
                    curr = curr->next;
                }

            } else {
                prev = curr;
                 curr = curr->next;
            }
           
        }
        return head;
    }
};