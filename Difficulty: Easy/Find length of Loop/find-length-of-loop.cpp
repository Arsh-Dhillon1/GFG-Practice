/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node* fast=head;
        Node* slow=head;
        int count=0;
        if(head==nullptr) return 0;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                count=1;
                slow=slow->next;
                while(slow!=fast){
                    count++;
                    slow=slow->next;
                }
                return count;
            }
        }
        return count;
    }
};