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

bool detectCycle(Node *head)
{
    if(head == NULL) return false;
    
    Node *slow = head, *fast = head;

    do {
        slow = slow->next;
        fast = fast->next;
        if(fast) fast = fast->next;
    } while(fast != NULL && fast != slow);
    
    if(fast) return true;
    return false;
}
