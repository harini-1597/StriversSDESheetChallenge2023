Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node *ptr1=firstHead, *ptr2=secondHead;
    while(ptr1 != ptr2){
        if(ptr1==NULL) ptr1=secondHead;
        else ptr1=ptr1->next;
        if(ptr2==NULL) ptr2=firstHead;
        else ptr2=ptr2->next;
    }
    return ptr1;
}
