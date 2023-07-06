LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    LinkedListNode<int>* chotaNode = reverseLinkedList(head->next);
    
    head ->next ->next = head;
    head ->next = NULL;
    
    return chotaNode;
}
