#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i;
    cout<<"Enter the range"<<endl;
    cin>>n;
    cout<<"Enter the element"<<endl;
    for (i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    cout<<"The array elements in reversed order is";
    for(i=n-1; i>=0;i--)
    {
        cout<<a[i];

    }

}