#include<stdio.h>
#include<stdlib.h>
struct Node{

    int data;
    struct Node *next;
};

void linked_list_traversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

//Allocate memory for nodes in the linked list in Heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    
    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=NULL;

    printf("before insertion\n");
    linked_list_traversal(head);
    // head = insertAtFirst(head, 40);
    printf("after insertion\n");
    linked_list_traversal(head);

    return 0;
}