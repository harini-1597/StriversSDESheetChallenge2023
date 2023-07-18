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

bool isPalindrome(LinkedListNode<int> *head) {
  LinkedListNode<int> *slow = head;
  LinkedListNode<int> *fast = head;
  if (head==NULL || head->next==NULL) return true;

  while (fast && fast->next) {
    fast = fast->next->next;
    slow = slow->next;
  }

  LinkedListNode<int> *curr, *prev, *next;
  curr = slow;
  prev = NULL;
  while (curr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  slow = prev;
  fast = head;
  while (slow) {
    if (fast->data != slow->data) return false;
    slow = slow->next;
    fast = fast->next;
  }
  return true;
}
