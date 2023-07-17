bool detectCycle(Node *head)
{
    if(head==NULL) return false;
	Node *tortoise=head, *hare=head;
    while(hare!=NULL && hare->next!=NULL){
        hare = hare->next->next;
        tortoise = tortoise->next;
        if(hare==tortoise) return true;
    }
    return false;
}
