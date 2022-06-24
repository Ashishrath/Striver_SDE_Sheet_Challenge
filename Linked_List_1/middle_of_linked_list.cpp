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

Node *findMiddle(Node *head) {
    Node *fast = head, *slow = head;
    
    while(fast->next) {
        fast = fast->next;
        slow = slow->next;
        if(fast->next) {
            fast = fast->next;
        }
    }
    
    return slow;
}