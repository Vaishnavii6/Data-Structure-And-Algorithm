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

struct Node * reverse(struct Node * head)
{
    int len=0;
    struct Node *c=head;
    while(c!=NULL)
    {
        c=c->next;
        len++;
    }
    int i,j;
    struct Node *p,*q;
    int temp;
    i=0;
    j=len-1;
    p=q=head;
    while(i<j)
    {
        int k=0;
        while (k<j)
        {
            q=q->next;
            k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;
        p=p->next;
        q=head;
        
    }
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
    third->next=NULL;

    
    printf("Linked list before traversal\n");
    linked_list_traversal(head);

    head=reverse(head); 
    printf("Linked list after traversal\n");
    linked_list_traversal(head);
    return 0;
}