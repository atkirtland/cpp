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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ret = nullptr;
        ListNode* temp = nullptr;
        int total = 0;
        while (l1 != nullptr || l2 != nullptr) {
            if (l1 != nullptr) {
                total += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                total += l2->val;
                l2 = l2->next;
            }
            if (temp == nullptr) {
                temp = new ListNode(total % 10);
                ret = temp;
            }
            else {
                temp->next = new ListNode(total % 10);
                temp = temp->next;
            }
            total /= 10;
        }
        if (total != 0) {
            temp->next = new ListNode(total);
        }
        return ret;
    }
};
