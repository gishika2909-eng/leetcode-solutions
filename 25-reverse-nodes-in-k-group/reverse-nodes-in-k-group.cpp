/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head, ListNode* tail) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != tail) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;

        // Check if k nodes are available
        for (int i = 0; i < k; i++) {
            if (temp == NULL)
                return head;
            temp = temp->next;
        }

        // Reverse first k nodes
        ListNode* newHead = reverse(head, temp);

        // Connect the remaining nodes
        head->next = reverseKGroup(temp, k);

        return newHead;
    }
};