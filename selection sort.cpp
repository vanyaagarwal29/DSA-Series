#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[]={10,7,8,9,5,3,4};
    n=sizeof(a)/sizeof(a[0]);
    for(int i =0; i<n-1; i++)
    {
       int min =i;
       for(int j=i+1; j<n;j++)
       {
           if(a[j]<a[min])
           {
               min=j;
           }
       }
       if(min!=i)
       {
           int temp=a[min];
           a[min]=a[i];
           a[i]=temp;
       }
    }
    for(int i=0; i<n;i++)
    { 
        cout<<a[i];
    }
    return 0;
}