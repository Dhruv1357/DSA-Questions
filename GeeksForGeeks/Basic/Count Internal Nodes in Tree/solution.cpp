/* Binary Tree Node Structure
class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int count = 0;
    
    int countNonLeafNodes(Node* root) 
    {
        if(!root)return count;
        
        if(root -> left || root -> right)count++;
        
        countNonLeafNodes(root -> left);
        countNonLeafNodes(root -> right);
        
        return count;
    }
};