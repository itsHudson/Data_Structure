# Question 1: Explain what is linked list.

## Answer:
```text
- A linked list is a linear data structure made up of nodes. Each node stores two parts: the data and a pointer (or link) to the next node in the sequence.
- Unlike arrays, linked list elements are not stored in contiguous memory locations. The nodes are connected through pointers.
- A linked list is useful when the size of the data may change during program execution because nodes can be added or removed dynamically.
```


---


## Question 2: Explain the basic properties of a linked list and its advantages.

## Answer:
```text
- The basic properties of a linked list are:
  - It consists of nodes.
  - Each node contains data and a pointer to the next node.
  - The first node is called the head.
  - The last node points to `NULL`.
  - Nodes are stored dynamically in memory.
  - The size of the linked list can grow or shrink during runtime.

- The advantages of a linked list are:
  - Dynamic size allocation.
  - Easy insertion and deletion of elements.
  - Does not require contiguous memory.
  - Memory is used only when needed.
```


---



## Question 3: Define the classes `NodeType` and `LinkedList` in C++ project.

## Answer: Below is the definition and implementation of `NodeType` and `LinkedList` classes.

```cpp
#include <iostream>
using namespace std;

class NodeType
{
public:
    int dataValue;
    NodeType* nextNodePointer;

    NodeType(int inputDataValue)
    {
        dataValue = inputDataValue;
        nextNodePointer = NULL;
    }
};

class LinkedList
{
private:
    NodeType* headNodePointer;
    int totalNumberOfNodes;

public:
    LinkedList()
    {
        headNodePointer = NULL;
        totalNumberOfNodes = 0;
    }

    void insertAtBeginning(int inputDataValue)
    {
        NodeType* newNodePointer = new NodeType(inputDataValue);
        newNodePointer->nextNodePointer = headNodePointer;
        headNodePointer = newNodePointer;
        totalNumberOfNodes++;
    }

    void insertAtEnd(int inputDataValue)
    {
        NodeType* newNodePointer = new NodeType(inputDataValue);

        if (headNodePointer == NULL)
        {
            headNodePointer = newNodePointer;
        }
        else
        {
            NodeType* currentNodePointer = headNodePointer;

            while (currentNodePointer->nextNodePointer != NULL)
            {
                currentNodePointer = currentNodePointer->nextNodePointer;
            }

            currentNodePointer->nextNodePointer = newNodePointer;
        }

        totalNumberOfNodes++;
    }

    int getSize()
    {
        return totalNumberOfNodes;
    }

    void print()
    {
        NodeType* currentNodePointer = headNodePointer;

        while (currentNodePointer != NULL)
        {
            cout << currentNodePointer->dataValue << " ";
            currentNodePointer = currentNodePointer->nextNodePointer;
        }

        cout << endl;
    }

    ~LinkedList()
    {
        NodeType* currentNodePointer = headNodePointer;

        while (currentNodePointer != NULL)
        {
            NodeType* nodeToDeletePointer = currentNodePointer;
            currentNodePointer = currentNodePointer->nextNodePointer;
            delete nodeToDeletePointer;
        }
    }
};

int main()
{
    LinkedList list;

    list.insertAtBeginning(5);
    list.insertAtEnd(9);
    list.insertAtBeginning(3);

    cout << list.getSize() << endl;
    list.print();

    list.insertAtEnd(11);

    cout << list.getSize() << endl;
    list.print();

    return 0;
}
