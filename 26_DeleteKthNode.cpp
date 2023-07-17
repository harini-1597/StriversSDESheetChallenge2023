Node* removeKthNode(Node* head, int K)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    Node* curr=head, *res=head;
    int diff=count-K;
    if(diff==0){
        res=res->next;
        return res;
    }
    for(int i=0; i<diff-1; i++)
        curr = curr->next;
    curr->next = curr->next->next;
    return res;
}
