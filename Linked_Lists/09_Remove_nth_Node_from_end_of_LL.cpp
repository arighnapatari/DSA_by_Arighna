//Given the head of a linked list, remove the nth node from the end of the list and return its head.
//Approach --> use fast and slow pointer , first traverse fast n no of times and then traverse both fast and slow one one time and as slow reaches the node before the delNode link it with the next node and free delNode

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i=0; i<n; i++) fast = fast->next;
        if(fast == NULL) return head->next;     // edge case --> when n == length of the LL
        while(fast->next != NULL)   
        {
            fast = fast->next;
            slow = slow->next;

        }
        ListNode* delNode = slow->next;    // node to be deleted
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }
};
