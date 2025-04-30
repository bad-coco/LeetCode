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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* currA = headA;
        ListNode* currB = headB;
        int nA = 1;
        int nB = 1;
        while (currA->next) {
            currA = currA->next;
            nA++;
        }
        while (currB->next) {
            currB = currB->next;
            nB++;
        }
        if (currB == currA) {
            currA = headA;
            currB = headB;
            if (nA < nB) {
                int diff = nB - nA;
                while (diff > 0) {
                    currB = currB->next;
                    diff--;
                }
            } else {
                int diff = nA - nB;
                while (diff > 0) {
                    currA = currA->next;
                    diff--;
                }
            }
            while (currA) {
                if (currA == currB) {
                    return currA;
                }
                currA = currA->next;
                currB = currB->next;
            }
        }
        return nullptr;
    }
};