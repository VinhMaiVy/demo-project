#include <iostream>
using namespace std;

struct Node
  {
     int data;
     struct Node *next;
  };
  
void PrintNode(Node * root){
    if (root == nullptr) {
        cout << endl;
        exit;
    }
    cout << root->data << " ";
    if (root->next != nullptr) PrintNode(root->next);
    
}

 
Node* Reverse(Node *head)
{
    Node *reverse = new Node();
    
    if (head->next != nullptr) {
        reverse = Reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
    } else {
        reverse = head;
        
    }

    return reverse;
}

int main() {
    Node n1,n2,n3,n4,n5;
    
    
    n1.data = 5;
    n1.next = &n2;
    
    n2.data = 2;
    n2.next = &n3;

    n3.data = 8;
    n3.next = &n4;

    n4.data = 1;
    n4.next = &n5;
    
    n5.data = 6;
    n5.next = nullptr;

    PrintNode(&n1);
    PrintNode (Reverse(&n1));
    
    return 0;
    
}