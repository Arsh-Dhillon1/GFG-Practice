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
    void func(Node* root,int &count){
        if(root==nullptr)return ;
        func(root->left,count);
        func(root->right,count);
        if(root->left==nullptr && root->right==nullptr)count++;
    }
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        int count=0;
        func(root,count);
        return count;
    }
};