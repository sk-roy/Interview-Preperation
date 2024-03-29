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
        int hand = 0;
        ListNode* res = NULL;
        ListNode* root;

        while(l1 != NULL or l2 != NULL or hand > 0) {
            if (l1 != NULL) {
                hand += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                hand += l2->val;
                l2 = l2->next;
            }

            if (res == NULL) {
                res = new ListNode(hand % 10);
                root = res;
            }
            else {
                res->next = new ListNode(hand % 10);
                res = res->next;
            }
            hand /= 10;
        }

        return root;
    }
};
