// WAP to find the greatest element from one linked list.
#include <iostream>
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
    int n,i;
    cout << "How many Nodes you want to create";
    cin >> n;
    cout<< "Enter the element";
    for (i = 0; i < n; i++)
    {
        node = (struct link *)malloc(sizeof(struct link));
        cin >> node->data;
        node->next = NULL;
        if (start == NULL)
        {

            start = node;
            current = node;
        }
        else
        {
            current->next = node;
            current = node; // current=current->next;
        }
    }
}
void largest()
{
    struct link *ptr;
    ptr = start;
    int large = ptr->data;
    while (ptr != NULL)
    {
        // if (large < (ptr->next->data))
        // {
        //     large = ptr->next->data;
        // }
        // ptr = ptr->next;
        current=ptr->next;
        if(large<current->data)
        {
            large=current->data;
        }
        ptr=ptr->next;
        current=current->next;
    }
    cout << "Largest el. is" << large;
}
int main()
{
    create();
    largest();
    return 0;
}
