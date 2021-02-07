#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *CreateNode(int data)
{
    struct Node *n;                                 //creating the node pointer
    n = (struct Node *)malloc(sizeof(struct Node)); //Allocating the memory in the heap
    n->data = data;                                 //Setting the data
    n->left = NULL;                                 //Setting the left and right children to NULL
    n->right = NULL;                                //Setting the left and right children to NULL

    return n; //Finally returning hte created node
}

void InOrder(struct Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}
int main()
{
    //Constructing the root node - Using function(recommended)
    struct Node *p = CreateNode(4);
    struct Node *p1 = CreateNode(1);
    struct Node *p2 = CreateNode(6);
    struct Node *p3 = CreateNode(5);
    struct Node *p4 = CreateNode(2);

    //linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    InOrder(p);

    return 0;
}