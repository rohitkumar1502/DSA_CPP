// WAP to sort the element ascending using seletion sort

#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,LOC,small,n,temp;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the element";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        small=a[i];
        LOC=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                LOC=j;
            }
        }
        temp=a[i];
        a[i]=a[LOC];
        a[LOC]=temp;
    }
    cout<<"\n The sorted array is \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;

}