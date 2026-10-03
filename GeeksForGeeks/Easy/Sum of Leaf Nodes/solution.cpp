/* A Binary Tree Node
class Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int sum = 0;
    int leafSum(Node* root) 
    {
        if(!root)return sum;
        
        if(!(root -> left) && !(root -> right))
        {
            sum+=root -> data;
            return sum;
        }
        
        leafSum(root -> left);
        leafSum(root -> right);
        
        return sum;
    }
};