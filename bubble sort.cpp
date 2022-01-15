#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[]={10,7,8,9,5,3,4};
    n=sizeof(a)/sizeof(a[0]);
    for(int i =0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
             }

        }
    }
    for(int i=0; i<n;i++)
    { 
        cout<<a[i];
    }
    return 0;
}
