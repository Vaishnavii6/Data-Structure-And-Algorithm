#include<stdio.h>
#include<stdlib.h>
struct Node{

    int data;
    struct Node *next;
    struct Node *prev;
};

void linked_list_traversal(struct Node *ptr)
{
    printf("Traversal\n");
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

void Reverse_DLL(struct Node *p){
    printf("Reverse\n");
    while(p!=NULL)
    {
        printf("Element: %d\n",p->data);
        p=p->prev;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    head->prev=NULL;
    
    second->data=20;
    second->next=third;
    second->prev=head;
    
    third->data=30;
    third->prev=second;
    third->next=NULL;

linked_list_traversal(head);
Reverse_DLL(third);

return 0;
}