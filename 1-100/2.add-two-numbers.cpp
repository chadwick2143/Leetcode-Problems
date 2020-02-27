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
        unsigned char nCarry = 0;
        ListNode* pAnsNode = new ListNode(0);
        ListNode* pCurNode = pAnsNode;
        while (l1 != nullptr || l2 != nullptr)
        {
            unsigned char x = 0, y = 0;
            if (l1 != nullptr)
            {
                x = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                y = l2->val;
                l2 = l2->next;
            }

            unsigned char sum = nCarry + x + y;
            nCarry = 0;
            if (sum >= 10)
            {
                nCarry = 1;
                sum -= 10;
            }
            pCurNode->next = new ListNode(sum);
            pCurNode = pCurNode->next;
        }

        if (nCarry == 1)
        {
            pCurNode->next = new ListNode(1);
        }

        return pAnsNode->next;
    }
};