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
        int nCarry = 0;
        ListNode* pAnsNode = new ListNode(0);
        ListNode* pCurNode = pAnsNode;
        while (l1 != nullptr || l2 != nullptr)
        {
            int x = 0, y = 0;
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

            int sum = nCarry + x + y;
            nCarry = sum / 10;
            pCurNode->next = new ListNode(sum % 10);
            pCurNode = pCurNode->next;
        }

        if (nCarry > 0)
        {
            pCurNode->next = new ListNode(nCarry);
        }

        return pAnsNode->next;
    }
};