#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node *next;
};

void Circular_LL_traversal(struct Node *head)
{
    struct Node * ptr=head;
    do
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    
}
struct Node * insertAtBegin(struct Node * head,int data)
{
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p =head->next;
    while(p->next != head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
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
    third->next=head;

    printf("Before\n");
    Circular_LL_traversal(head);
    head = insertAtBegin(head,40);
    printf("After\n");
    Circular_LL_traversal(head);
    return 0;
}