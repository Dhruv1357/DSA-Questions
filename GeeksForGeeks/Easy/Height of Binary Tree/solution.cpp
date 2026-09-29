/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    int help(Node* root)
    {
        if(!root)return 0;
        
        int lh=0,rh=0;
        
        lh = help(root -> left);
        rh = help(root -> right);
        
        if(lh > rh)return lh+1;
        else return rh+1;
    }
    
    int height(Node* root) 
    {
        return help(root)-1;
    }
};