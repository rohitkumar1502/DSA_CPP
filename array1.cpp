#include<iostream>
using namespace std;
int main()
{
    int a[10], n,i,no,LOC;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the element";
    for(i=0;i<n;i++)
    {
        cin>>a[2];

    }
    cout<<"Enter the number you want to delete:";
    cin>>no;
    for(i=0; i<n; i++)
    {
        if(no==a[i])
        break;
    }
    LOC=i+1;
    for(i=LOC-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"The final array is \n";
    for(i=0;i<n-1;i++)
    {
        cout<<a[i];
    }
    return 0;



}