/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    
    
    int countLeaves(Node* root) 
    {
        int count = 0;
        if(!root)return count;
        
        if(!(root -> left) && !(root -> right))count++;
        
        count+=countLeaves(root -> left);
        count+=countLeaves(root -> right);
        
        return count;
    }
};