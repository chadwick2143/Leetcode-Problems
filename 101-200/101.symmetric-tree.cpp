/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isTreeSymmetric(TreeNode* p, TreeNode* q) {
        if (p != nullptr && q != nullptr)
        {
            return p->val == q->val && isTreeSymmetric(p->left, q->right) && isTreeSymmetric(p->right, q->left);
        }
        else if (p == nullptr && q == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
        {
            return true;
        }

        return isTreeSymmetric(root->left, root->right);
    }
};