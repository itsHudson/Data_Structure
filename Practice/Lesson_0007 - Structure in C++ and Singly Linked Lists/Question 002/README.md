# Linked List Deletion: Question and Answer

## Question:
Create a function that can remove flower information from a linked list based on their flower name.  
Give a detailed explanation of the time and space required to delete an item from a linked list.

---

## Answer:

### Function to Remove Flower by Name:

```cpp
#include <iostream>
#include <string>
using namespace std;

class FlowerNode
{
public:
    string flowerName;
    FlowerNode* next;

    FlowerNode(string inputName)
    {
        flowerName = inputName;
        next = NULL;
    }
};

class FlowerLinkedList
{
private:
    FlowerNode* head;

public:
    FlowerLinkedList()
    {
        head = NULL;
    }

    void insertAtEnd(string inputName)
    {
        FlowerNode* newNode = new FlowerNode(inputName);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            FlowerNode* current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void removeFlowerByName(string targetFlowerName)
    {
        // Case 1: Empty list
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        // Case 2: Target is at head
        if (head->flowerName == targetFlowerName)
        {
            FlowerNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Case 3: Target is in middle or end
        FlowerNode* current = head;

        while (current->next != NULL && current->next->flowerName != targetFlowerName)
        {
            current = current->next;
        }

        if (current->next != NULL)
        {
            FlowerNode* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        else
        {
            cout << "Flower not found." << endl;
        }
    }

    void display()
    {
        FlowerNode* current = head;
        while (current != NULL)
        {
            cout << current->flowerName << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};
