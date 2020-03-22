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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode ret(0);
        ListNode* pCurNode = &ret;
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val > l2->val)
            {
                pCurNode->next = l2;
                l2 = l2->next;
            }
            else
            {
                pCurNode->next = l1;
                l1 = l1->next;
            }

            pCurNode = pCurNode->next;
        }

        pCurNode->next = l1 == nullptr ? l2 : l1;

        return ret.next;
    }
};