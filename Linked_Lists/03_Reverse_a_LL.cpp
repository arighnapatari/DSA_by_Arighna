/*Given the head of a singly linked list, reverse the list, and return the reversed list.*/
/*Pointers used are -> prev -- it points to node before the head or temp
temp -- it points to the head initially and iterates over the LL
front -- it points to the node next to head*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;

        while(temp != nullptr)
        {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;

        }
        return prev;
    }
};

