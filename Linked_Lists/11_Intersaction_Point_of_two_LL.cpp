/*Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
For example, the following two linked lists begin to inter*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL) return NULL;

        ListNode* t1 = headA;
        ListNode* t2 = headB;
        while(t1 != t2)
        {
            t1 = t1->next;          // move t1 and t2 by one place and then if one reaches null then take it to the head of the opposite LL and then again move them by one place untill both reaches the same point
            t2 = t2->next;
            
            if(t1 == t2) return t1;

            if(t1 == NULL) t1 = headB;
            if(t2 == NULL) t2 = headA;

        }
        return t1;

    }
};
