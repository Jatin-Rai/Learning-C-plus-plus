#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// Creating a Single Linked List

using namespace std;

struct node
{
    int data;
    node *link;
};

// Traversing and counting the number of nodes in the single linked list

void count_of_nodes(node *head)
{
    int count = 0;

    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
    }

    node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    cout << "The no. of nodes in the linked list is " << count << endl;
}

// Printing the data of the single linked list 

void print_data(node *head)
{
    if(head == NULL)
    {
        cout << "Linked list is empty"<<endl;
    }

    node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        cout<<"The data stored in the memory "<<ptr<<" is "<<ptr->data<<endl;
        ptr = ptr->link;
    }
    

}

// Adding a node at the end of the linked list

void add_at_end(node *head, int data)
{
    node *ptr, *temp;

    ptr = head;
    temp = (node *)malloc(sizeof(node));

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = temp;
    
}


int main()
{
    node *head = NULL;

    // Creating the first node

    head = (node *)malloc(sizeof(node));
    head->data = 96;
    head->link = NULL;

    // Creating the second node in a single linked list

    node *current = (node *)malloc(sizeof(node));
    current->data = 48;
    current->link = NULL;
    head->link = current;

    // Creating the third node in a single linked list

    current = (node *)malloc(sizeof(node));
    current->data = 20;
    current->link = NULL;
    head->link->link = current;

    count_of_nodes(head);

    add_at_end(head, 69);

    print_data(head);


    return 0;
}