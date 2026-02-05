/*Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
The first node is considered odd, and the second node is even, and so on
Note that the relative order inside both the even and odd groups should remain as it was in the input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.*/

//Approach --> take twwo pointers odd and even, odd traverses the LL in odd positions and even traverses the LL in even positions and then connect the last node of odd to evenHead which is the first node of even

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = head->next;   // This is for the connection of last node of odd to the first node of even

        while(even != NULL && even->next != NULL)    // this is bcoz if even reaches the end then odd will definitely reach the end
        {
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;

        }
        odd->next = evenHead;
        return head;

    }
};
