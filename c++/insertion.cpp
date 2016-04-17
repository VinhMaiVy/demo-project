#include <iostream>
using namespace std;

typedef struct node
{
   int data;
   node * left;
   node * right;
} node;


void printnode(node * root){
    if (root == nullptr) exit;
    cout << root->data << endl;
    if (root->left != nullptr) printnode(root->left);
    if (root->right != nullptr) printnode(root->right);
    cout << endl;
}



node * insert(node * root, int value)
{

  if (root == nullptr){
     node *newnode=new node();
     newnode->data=value;
     newnode->left=nullptr;
     newnode->right=nullptr;
     root=newnode;
  } else if (root->data > value) 
      root->left = insert(root->left, value);
    else if (root->data < value) 
      root->right = insert(root->right, value);

  return root;
}



int main()
{
    node n1, n2, n3, n4, n5;
    
    n1.data = 4;
    n1.left = &n2;
    n1.right = &n5;
    
    n2.data = 2;
    n2.left = &n3;
    n2.right = &n4;
    
    n3.data = 1;
    n3.left = nullptr;
    n3.right = nullptr;
    
    n4.data = 3;
    n4.left = nullptr;
    n4.right = nullptr;
    
    n5.data = 7;
    n5.left = nullptr;
    n5.right = nullptr;
 
    printnode(&n1);
    
    printnode(insert(&n1, 6));
    
    return 0;
    
}