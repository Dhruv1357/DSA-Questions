/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    Node* buildTree(vector<int>& nodes) 
    {
        queue<Node*>qu;
        Node* curr = new Node(nodes[0]);
        Node* root = curr;
        qu.push(curr);
        
        int i=1;
        while(i < nodes.size())
        {
            curr = qu.front();
            
            Node* l = new Node(nodes[i++]);
            curr->left = l;
            qu.push(l);
            
            if(i < nodes.size())
            {
                Node* r = new Node(nodes[i++]);
                curr->right = r;
                qu.push(r);
            }
            
            qu.pop();
        }
        
        return root;
    }
};