// WAP to serch a number from n array using linear serch
#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, no;
    cout << "Enter the size of array";
    cin >> n;
    cout << "Enter the element";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number you want to serch";
    cin >> no;
    for (i == 0; i < n; i++)
     {
        if (no == a[i])
     }
    {
        cout << "the location is" << i++;
        break;
    }
    if (i == n)
    {
        cout << "no is not present";
    }
    return 0;
}