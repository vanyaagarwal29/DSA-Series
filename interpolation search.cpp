#include<iostream>
using namespace std;
int interpolationSearch(int arr[], int size, int element)
{
    int low,pos,high;
    low=0;
    high=size-1;
    while(low<=size && element>=arr[low] && element<=arr[high])
    {
        pos=low +(((double)(high-low)/(arr[high]-arr[low]))*(element-arr[low]));
        if(arr[pos] == element)
        {
            return pos;
        }
        else if(arr[pos]<element)
        {
            low=pos+1;
        }
        else
        {
            high=pos-1;
        }
    }
    return -1;
    
}
int main()
{
    int arr[]={12,17,18,19,23};
    int size=sizeof(arr)/sizeof(int);
    int element=18;
    int search=interpolationSearch(arr,size, element);
    cout<<"The element is found at "<<search;
    return 0;
}