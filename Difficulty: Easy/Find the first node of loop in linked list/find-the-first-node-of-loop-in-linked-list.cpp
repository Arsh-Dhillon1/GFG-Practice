// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    Node* findFirstNode(Node* head) {
         if (!head || !head->next) return nullptr;

        Node *slow = head;
        Node *fast = head;

        // Step 1: Detect loop
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: Find start of loop
                Node* start = head;
                while (start != slow) {
                    start = start->next;
                    slow = slow->next;
                }
                return start;
            }
        }

        return nullptr; // No loop
    }
};