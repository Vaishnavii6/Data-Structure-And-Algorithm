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

struct Node * swap(struct Node * head,int index)
{
    struct Node *p=head;
    struct Node *q;
    struct Node *r;
    int i=1;
    while(i<index-1)
    {
        p=p->next;
        i++;
    }
    q=p->next;
    r=q->next;

    q->next=r->next;
    r->next=q;
    p->next=r;
    
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

//Allocate memory for nodes in the linked list in Heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    
    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;


    printf("Linked list before traversal\n");
    linked_list_traversal(head);

    head=swap(head,2);
    
    printf("Linked list after traversal\n");
    linked_list_traversal(head);
    return 0;
}