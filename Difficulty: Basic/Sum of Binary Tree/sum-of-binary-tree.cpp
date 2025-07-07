/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    void func(int &res,Node* root){
        if(root==nullptr)return ;
        res=res+root->data;
        func(res,root->left);
        func(res,root->right);
    }
    int sumBT(Node* root) {
        int res=0;
        func(res,root);
        return res;
    }
};