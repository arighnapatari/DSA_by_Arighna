/*A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.
Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.
For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.
Return the head of the copied linked list.*/
// Step-1  Insert copyNodes in between the original LL
// Step-2  Connect random pointers
// Step-3  Connect next pointer

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        while(temp != NULL)
        {
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;

        }
        temp = head;
        while(temp != NULL)
        {
            Node* copyNode = temp->next;
            if(temp->random) copyNode->random = temp->random->next;
            else copyNode->random = NULL;
            temp = temp->next->next;
        }

        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        temp = head;
        while(temp!=NULL)
        {
            res->next = temp->next;
            temp->next = temp->next->next;
            res = res->next;
            temp = temp->next;
        }
        return dummyNode->next;
    }
};
