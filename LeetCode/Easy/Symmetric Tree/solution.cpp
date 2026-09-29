/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<int>left;
    vector<int>right;

    void preOrder(TreeNode* root)
    {
        if(!root)
        {
            left.push_back(101);
            return;
        }

        left.push_back(root -> val);
        preOrder(root -> left);
        preOrder(root -> right);
    }

    void postOrder(TreeNode* root)
    {
        if(!root)
        {
            right.push_back(101);
            return;
        }

        right.push_back(root -> val);
        postOrder(root -> right);
        postOrder(root -> left);
    }

    bool isSymmetric(TreeNode* root) 
    {
        preOrder(root -> left);
        postOrder(root -> right);

        if(left.size() != right.size())return false;

        int i = 0;
        while(i < left.size())
        {
            if(left[i] != right[i]) return false;

            i++;
        }

        return true;
    }
};