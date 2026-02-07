//Given the head of a linked list, rotate the list to the right by k places.

class Solution {
public:
    ListNode* findKthNode(ListNode* temp, int k)
    {
        int cnt = 1;
        while(temp != NULL)
        {  
            if(cnt == k) return temp;
            cnt++;
            temp = temp->next;

        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0) return  head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next != NULL)
        {
            tail = tail->next;
            len += 1;
        }
        if(k % len == 0) return head;
        k = k % len;
        tail->next = head;
        ListNode* newLastNode = findKthNode(head, len - k);
        head = newLastNode->next;
        newLastNode->next = NULL;
        return head;
    }
};
