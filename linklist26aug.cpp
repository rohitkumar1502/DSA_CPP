// WAP to create one link list snd display the elements
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
void display()
{
    struct link *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        cout << ptr -> data;
        ptr = ptr->next;
    }
}
int main()
{
    create();
        display(); 

return 0;
}