#include<iostream>
using namespace std;
int main()
    {
        int i;
        int element=7;
        int arr[]={2,6,98,7,4};
        int n=sizeof(arr)/sizeof(arr[0]);
        for(i=0; i<n;i++)
        {
            if(arr[i]==element)
            {
                cout<<"The element was found at index"<<i<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<"not found";
        }
   }