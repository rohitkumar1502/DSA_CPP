#include<iostream>
using namespace std;
int main()
{
    int a[10],n,z;
    cout<<"Enter the range of array"<<endl;
    cin>>n;
    cout<<"Enter the element";
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    cout<<"The element of the arrays are";
    for(i=0;i<=n-1;i++)
    {
        cout<<a[i];
    }
}