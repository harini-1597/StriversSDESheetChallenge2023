Node *findMiddle(Node *head) {
    Node* temp = head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    temp=head;
    count=count/2;
    while(count!=0){
        temp=temp->next;
        count--;
    }
    return temp;
}
