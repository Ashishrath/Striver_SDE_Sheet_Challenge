#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL) return second;
    if(second == NULL) return first;
    
    Node<int> *p1 = first, *p2 = second;
    Node<int> *head;
    Node<int> *temp;
    
    if(p1->data <= p2->data) 
    {
        temp = first;
        p1 = p1->next;
    } else {
        temp = second;
        p2 = p2->next;
    }
    head = temp;
    
    while(p1 && p2) {
        if(p1->data <= p2->data) {
            temp->next = p1;
            p1 = p1->next;
        } else {
            temp->next = p2;
            p2 = p2->next;
        }
        temp= temp->next;
    }
    
    if(p1) {
        temp->next = p1;
    }
    
    if(p2) {
        temp->next = p2;
        p2 = p2->next;
    }
    
    return head;
}
