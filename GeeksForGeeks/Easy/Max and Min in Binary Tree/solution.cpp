/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int findMax(Node *root) 
    {
        if(!root)return 0;
        
        int max = root -> data;
        int lm=0,rm=0;
        
        lm = findMax(root->left);
        rm = findMax(root->right);
        
        if((max < lm) && (rm < lm))max = lm;
        else if((max < rm) && (rm > lm))max = rm;
        
        return max;
    }

    int findMin(Node *root) 
    {
        if(!root)return 0;
        
        int min = root -> data;
        int lm=0,rm=0;
        
        lm = findMin(root->left);
        rm = findMin(root->right);
        
        if((min > lm) && (lm > 0))min = lm;
        
        if((min > rm) && (rm > 0))min = rm;
        
        return min;
    }
};