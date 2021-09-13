#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;

    struct node *link;
};


node *add_node(node *ptr, int data)
{
    node *temp = (node *)malloc(sizeof(node));
    
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;

    return temp;

}

int main()
{

    node *head = (node *)malloc(sizeof(node));
    head->data = 45;
    head->link = NULL;

    node *ptr = head;
    ptr = add_node(ptr, 12);
    ptr = add_node(ptr, 96);
    ptr = add_node(ptr, 85);
    ptr = add_node(ptr, 56);


    ptr = head;

    while (ptr != NULL)
    {
        cout<<"The data stored in the memory "<<ptr->link<<" is "<<ptr->data<<endl;
        ptr = ptr->link;
    }


    return 0;
    
}