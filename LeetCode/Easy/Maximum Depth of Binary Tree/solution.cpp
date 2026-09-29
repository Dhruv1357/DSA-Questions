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

    int help(TreeNode* root)
    {
        if(!root)return 0;

        int ld=0,rd=0;

        ld = help(root -> left);
        rd = help(root -> right);

        if(ld > rd) return ld+1;
        else return rd+1;
    }

    int maxDepth(TreeNode* root) 
    {
        return help(root);
    }
};