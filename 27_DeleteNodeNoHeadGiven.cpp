void deleteNode(LinkedListNode<int> * node) {
    LinkedListNode<int> *temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
}
