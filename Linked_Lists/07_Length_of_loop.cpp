//Given the head of a singly linked list, find the length of the loop in the linked list if it exists. Return the length of the loop if it exists; otherwise, return 0.

class Solution {
public:
    int findLength(Node* slow, Node* fast)
        {
            int cnt = 1;
            fast = fast->next;

        }
        return cnt;
    int findLengthOfLoop(ListNode *head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast -> next -> next;
            if(slow == fast)
            {
                return findLength(slow, fast);

            }
        }
        return 0;
    }
};
