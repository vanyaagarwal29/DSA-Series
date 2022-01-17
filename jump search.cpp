#include<iostream>
using namespace std;
int main()
    {
        int i, low,jump;
        int element=7;
        int arr[]={2,6,98,7,4};
        int n=sizeof(arr)/sizeof(arr[0]);
        for(i=0; i<n;i+=jump)
        {
            if(arr[i]==element)
            {
                cout<<"The number is at index "<<i;
            }
            else if(arr[i]<element)
            {
                low=i;
            }
            else(arr[i]>element);
            {
                break;
            }
        }
        for(i=low;i<n;i++)
        {
            if(arr[i]==element)
            cout<<"The number is at index "<<i;
        }
    }