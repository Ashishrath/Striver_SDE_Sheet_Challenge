#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    int len = 0;
    LinkedListNode<int> *curr = head;
    
    if(head == NULL || K == 0) return head;
    
    while(curr) {
        curr = curr->next;
        len++;
    }
    if(K == len) return head->next;
    
    int itr = len - K - 1;
    curr = head;
    
    while(itr--) {
        curr = curr->next;
    }
    curr->next = curr->next->next;
   
    return head;
}
