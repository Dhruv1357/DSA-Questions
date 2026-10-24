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

    TreeNode* helper(TreeNode* root,vector<int>& nums,int s,int e)
    {
        if(s > e)return nullptr;

        int m = (s+e)/2;
        TreeNode* left = new TreeNode();
        TreeNode* right = new TreeNode();

        root -> left = left;
        root -> right = right;
        
        root -> val = nums[m];

        root -> left = helper(root -> left, nums,s,m-1);
        root -> right = helper(root -> right, nums,m+1,e);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        TreeNode* root = new TreeNode();
        helper(root,nums,0,nums.size()-1);

        return root;
    }
};