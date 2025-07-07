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
    void func(Node* root, int &sum){
        if(root==nullptr)return ;
        func(root->right,sum);
        func(root->left,sum);
        if(root->right==NULL && root->left==nullptr){
            sum=sum+root->data;
        };
    }
    int leafSum(Node* root) {
        int sum=0;
        func(root,sum);
        return sum;
        
    }
};