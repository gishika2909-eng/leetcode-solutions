/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;

        while (curr != NULL) {
            if (curr->child != NULL) {
                Node* next = curr->next;
                Node* child = curr->child;

                // Find the last node of child list
                Node* temp = child;
                while (temp->next != NULL) {
                    temp = temp->next;
                }

                // Connect child list
                curr->next = child;
                child->prev = curr;
                curr->child = NULL;

                // Connect back to original list
                temp->next = next;

                if (next != NULL) {
                    next->prev = temp;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};