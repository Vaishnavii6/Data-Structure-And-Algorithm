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

int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

struct Node *searchIter(struct Node *root, int key)
{
    while(root!=NULL)
    {
        if(key==root->data)
        {
            return root;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return NULL;
}

int main()
{
    //Constructing the root node - Using function(recommended)
    struct Node *p = CreateNode(5);
    struct Node *p1 = CreateNode(3);
    struct Node *p2 = CreateNode(6);
    struct Node *p3 = CreateNode(1);
    struct Node *p4 = CreateNode(4);

    //linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    struct Node *n=searchIter(p, 3);
    if(n!=NULL){
        printf("Found: %d",n->data);
    }
    else{
        printf("Element not found");
    }

    return 0;
}