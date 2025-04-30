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
    ListNode* removeElements(ListNode* head, int value) {
        if (head == nullptr || (head->next == nullptr && head->val == value))
            return nullptr;

        while (head != nullptr && head->val == value) {
            head = head->next;
            cout << "HERE" << endl;
        }
        ListNode* current = head;
        ListNode* prev = head;

        while (current != nullptr) {
            if (current->val == value) {

                prev->next = current->next;
                current->next = nullptr;
                // delete current;
                current = prev->next;

            } else {
                prev = current;
                current = current->next;
            }
        }

        return head;
    }
};