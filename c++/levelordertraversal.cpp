#include <iostream>
using namespace std;

typedef struct node
{
   int data;
   node * left;
   node * right;
} node;


void PrintGivenLevel(node * root, int level) {
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1)
    {
        PrintGivenLevel(root->left, level-1);
        PrintGivenLevel(root->right, level-1);
    }
}

int height(node *root) {
    if (root == nullptr) return 0;
    else{
        int lh = height(root->left);
        int rh = height(root->right);
        if (lh > rh) return (lh+1);
        else return (rh+1);
    }
}


void LevelOrder(node * root){
    
    int h = height(root);
    int i;
    
    for (i=1; i<=h; i++){
        PrintGivenLevel(root, i);
    }
    
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
 
    LevelOrder(&n1);
    
    return 0;
    
}