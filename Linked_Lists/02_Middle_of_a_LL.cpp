/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.*/
//Approach --> Tortoise hare method, here we take two pointers fast and slow , slow traverses only one step at a time and fast traverses two nodes at a time and when fast reaches the end we return slow for odd no of nodes and when fast reaches the null then we return slow for even cases.
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)  //odd and even conditions.
        {
            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;
    }
};
