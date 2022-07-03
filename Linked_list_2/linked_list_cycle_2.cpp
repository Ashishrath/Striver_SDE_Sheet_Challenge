#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *firstNode(Node *head)
{
    if(head == NULL) return false;
    
    Node *slow = head, *fast = head;

    do {
        slow = slow->next;
        fast = fast->next;
        if(fast) fast = fast->next;
    } while(fast != NULL && fast != slow);
    
    if(fast) {
        fast = head;
        while(fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    return 0;
    
    
}
