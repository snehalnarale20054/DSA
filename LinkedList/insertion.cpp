#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

int main()
{
    Node *head;
    head = NULL;

    // Insert  a node at begining

    int arr[] = {2, 4, 6, 8, 10};

    // Linked list  doesn't Exist
    for (int i = 0; i < 5; i++)
    {

        if (head == NULL)
        {
            head = new Node(arr[i]);
        }
        // Linked list Exist
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    // print the value
    Node *temp = head;
    while (temp != NULL) // while(temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}

/*     Insertion at the start without using an array


#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *head = NULL;

    // Insert first node
    Node *newNode = new Node(10);
    newNode->next = head;
    head = newNode;

    // Insert another node at beginning
    Node *newNode2 = new Node(20);
    newNode2->next = head;
    head = newNode2;

    // Display linked list
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
*/

/*
Generic insertion-at-beginning function



void insertAtBeginning(Node* &head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
*/