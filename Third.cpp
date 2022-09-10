// WAP to insert a number in particular location of the array
#include<iostream>
using namespace std;
int main()
{
    int a[10],loc,no;
    cout<<"Enter the range"<<endl;
    cin>>n;
    cout<<"Enter the element"<<endl;
    for (i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number u wnt to insert"
    cin>>n;
    cout<<"Enter the locatin where u want to insert ";
    cin>>loc;
    for(i=n;i<=loc;i--)
    {
        a[i]=a[i-1]
    }
    a[loc-1]=no;
    cout<<"Thhe final Array is:\n";
    for(i=0;i<=n;i++)
    {
        cout<<a[i];
    }
}    
