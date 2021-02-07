#include<stdio.h>
#include<stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int* arr;

};

int isEmpty(struct circularQueue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if((q->r+1)%q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void Enqueue(struct circularQueue *q,int val)
{
    if(isFull(q))
    {
        printf("This queue is full\n");
    }
    else{
        q->r=(q->r+1) % q->size;
        q->arr[q->r]=val;
        printf("Enqueued element: %d\n",val);
    }
}

int Dequeue(struct circularQueue *q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("This queue is Empty\n");
    }
    else{
        q->f=(q->f+1) % q->size;
        a=q->arr[q->f];
    }
    return a;
}

// void traversal(struct circularQueue *q)
// {
//     while(q->r!=q->size)
//     {
//         q->r++;
//         printf("ELEMENTS:- %d\n",q->arr[q->r]);
//     }
// }

int main()
{
    struct circularQueue q;
    q.size=4;
    q.f=q.r=0;
    q.arr=(int *)malloc(q.size * (sizeof(int)));

    //Enqueue few elements
    Enqueue(&q,12);
    Enqueue(&q,15);
    Enqueue(&q,3);
    Enqueue(&q,1);

    //traversal(&q);
    printf("Dequeuing element %d\n",Dequeue(&q));
    printf("Dequeuing element %d\n",Dequeue(&q));
    printf("Dequeuing element %d\n",Dequeue(&q));
    Enqueue(&q,10);
    Enqueue(&q,1);
    Enqueue(&q,1);

    if(isEmpty(&q))
    {
       printf("Queue is Empty");
    }

    if(isFull(&q))
    {
       printf("Queue is Full");
    }

    return 0;
}