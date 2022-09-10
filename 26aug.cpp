// WAP a program to search one element from the link list
#include <iostream>
#include <cstdlib>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
struct link *start = NULL;
struct link *current;
struct link *node;
void create()
{
    char ch = 'y';
    while (ch == 'y')
    {
        node = (struct link *)malloc(sizeof(struct link));
        cout << "Enter one element:";
        cin >> node->data;
        if (start == NULL)
            
        {
            start = node;
            current = node;
        }
        else {
            current->next = node;
            current = node;
        
        }
        cout << "Do you want to create another Node(y/n):";
        cin >> ch;
    }
}
void search()
{
    int no, ctr=0,found=0;
    cout<<"Enter the number";
    cin>>no;
    struct line *ptr;
    ptr=start;
    while(ptr !=NULL)
    {
        if(no==ptr->data)
            cout<<"The location is:"<<ctr+1;
            found=1
            break;

    }
    ctr++;
    ptr=ptr->next;
    



if(found==0)
{
    cout<<"no not present"
}
}
