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
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        TreeNode* node = new TreeNode(val);

        if(!root)return node;

        TreeNode *c=root,*p=nullptr;

        while(c)
        {
            p = c;
            if(c -> val > val)c = p -> left;
            else c = p -> right;
        }

        if(p -> val > val)p -> left = node;
        else p -> right = node;

        return root;
    }
};