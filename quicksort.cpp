#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int partition(int arr[], int low, int high)
{
    int pivot=arr[low];
    int i=low+ 1;
    int j=high;
    int temp;
    do{
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }while(i<j);
        temp=arr[low];
        arr[low]=arr[j];
        arr[j]=temp;
        return j;
       
}

void quicksort(int arr[], int low,int high)
{
    int partitionindex;
    if(low<high)
    {
        partitionindex=partition(arr, low, high);
        quicksort(arr,low,partitionindex-1);
        quicksort(arr,partitionindex+1, high );
    }
    
}
int main()
{
    int arr[]={4,2,6,7,8};
    int n=5;
   
    quicksort(arr,0,n-1);
    printarray(arr, n);
    return 0;
    
}