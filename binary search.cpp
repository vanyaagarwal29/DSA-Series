#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int element)
{
    int low, mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        else if(arr[mid]<element)
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
int main()
{
    int arr[]={12,17,18,19,23};
    int size=sizeof(arr)/sizeof(int);
    int element=18;
    int search=binarySearch(arr,size, element);
    cout<<"The element is found at "<<search;
    return 0;
}