//Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
//Approach --> tortoise hare method , here we will detect the starting point by -->
//           After the meeting of the fast and slow we will take slow to head again and run a loop where slow and fast will be traversing through only one node and when they meet next will be our starting point

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                slow = head;                  //Important part
                while(slow != fast)
                {
                    slow = slow ->next;
                    fast = fast -> next;

                }
                return slow;
            }
        }
        return NULL;
        
    }
};
