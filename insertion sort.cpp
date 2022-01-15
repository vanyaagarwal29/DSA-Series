#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[]={10,7,8,9,5,3,4};
    n=sizeof(a)/sizeof(a[0]);
    for(int i =1; i<n; i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]==a[j];
            j--;
        }
    a[j+1]=temp;
    }
    for(int i=0; i<n;i++)
    { 
        cout<<a[i];
    }
    return 0;
}