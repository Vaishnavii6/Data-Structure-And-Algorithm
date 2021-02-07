#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linked_list_traversal(struct Node *ptr)
{
    printf("printing the elements of the LL\n");
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

void Enqueue(int val)
{
        struct Node *n=(struct Node *)malloc(sizeof(struct Node));
        if(n==NULL)
        {
            printf("Queue is Full\n");
        }
        else{
            n->data=val;
            n->next=NULL;
            if(f==NULL)
            {
                f=r=n;
            }
            else{
                r->next=n;
                r=n;
            }
        }
}

int Dequeue()
{
        int val=-1;
        struct Node *ptr=f;
        if(f==NULL)
        {
            printf("Queue is Empty\n");
        }
        else{
            f=f->next;
            val=ptr->data;
            free(ptr);
        }
        return val;
}
int main()
{
    linked_list_traversal(f);
    printf("Dequeing element:%d\n",Dequeue());
    Enqueue(34);
    Enqueue(4);
    Enqueue(24);
    printf("Dequeing element:%d\n",Dequeue());
    printf("Dequeing element:%d\n",Dequeue());
    printf("Dequeing element:%d\n",Dequeue());
    printf("Dequeing element:%d\n",Dequeue());
    linked_list_traversal(f);

    return 0;
}