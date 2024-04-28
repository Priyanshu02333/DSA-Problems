/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    // Write your code here
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node *tail = head;
    while(tail->next != nullptr) {
        tail = tail->next; 
         }
        Node * temp = tail->prev;
         temp->next = nullptr; 
         tail->prev = nullptr;
      
        free(tail);
        return head;
  
}