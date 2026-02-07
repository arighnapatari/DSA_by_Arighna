/*Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
You may not alter the values in the list's nodes, only nodes themselves may be changed.*/

//Use two functions one to reverse the kth group LL and the one to find the kth node 
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
    ListNode* findKthNode(ListNode* temp, int k)
    {
        k = k-1;
        while(temp != NULL && k>0)
        {
            k--;
            temp = temp->next;

        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* nextNode = NULL;
        ListNode* prevNode = NULL;
        while(temp != NULL)
        {
            ListNode* kthNode = findKthNode(temp, k);
            if(kthNode == NULL)
            {   
                if(prevNode) prevNode->next = temp;
                break;
            }
            nextNode = kthNode->next;
            kthNode->next = NULL;
            reverseList(temp);
            if(temp == head)
            {
                head = kthNode;
            }
            else
            {
                prevNode->next = kthNode;
            }
            prevNode = temp;
            temp = nextNode;
        }
        return head;

    }
};
