#include<stdio.h>

//Code for linear Search
int linearSearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    //Keep searching while low<=high
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main(){

    // int arr[]={1,55,64,6,81,4,3,7,8,9,89,5,74};
    // int size=sizeof(arr)/sizeof(int);

    int arr[]={1,55,64,68,81,90,100,110,450,600};
    int size=sizeof(arr)/sizeof(int);

    int element=600;
    //int index=linearSearch(arr,size,element);
    int index=binarySearch(arr,size,element);
    printf("The element %d was found at index %d",element,index);
    return 0;
}