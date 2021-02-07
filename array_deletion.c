#include<stdio.h>

//code for traversal
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

//code for deletion
void deletion(int arr[], int size,int capacity, int index){
    if(index>=capacity)
    {
        printf("Array overflow\n");
    }
    else
    {
    for(int i = index ;i < size-1 ; i++)
    {
        arr[i]=arr[i+1];
    }
    }

}
int main(){
    int arr[100]={1,2,3,47,8};
    int size=5, index=103; 

    display(arr, size);

    deletion(arr, size, 100, index);
    size-=1;
    display(arr,size);

    return 0;
}