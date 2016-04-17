#include <iostream>
using namespace std;

typedef struct node
{
   int data;
   node * left;
   node * right;
} node;


void printleft(node * root) {
    if (root->left != nullptr) {
        printleft(root->left);
    }
    cout << root->data << endl;
}

void printright(node * root) {
    cout << root->data << endl;
    if (root->right != nullptr) {
        printright(root->right);
    }
    
}


void top_view (node * root) {
    
    if (root == nullptr)
        return;
    
    printleft(root->left);
    cout << root->data << endl;
    printright(root->right);
    
}



int main()
{
    node n1, n2, n3, n4, n5, n6;
    
    n1.data = 3;
    n1.left = &n2;
    n1.right = &n5;
    
    n2.data = 5;
    n2.left = &n3;
    n2.right = &n4;
    
    n3.data = 1;
    n3.left = nullptr;
    n3.right = nullptr;
    
    n4.data = 4;
    n4.left = nullptr;
    n4.right = nullptr;
    
    n5.data = 2;
    n5.left = &n6;
    n5.right = nullptr;
 
    n6.data = 6;
    n6.left = nullptr;
    n6.right = nullptr;
 
    top_view(&n1);
    
    return 0;
    
}