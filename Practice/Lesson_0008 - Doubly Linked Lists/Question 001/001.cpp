#include <iostream>
// Lets us use cout and cin.

using namespace std;
// So we can write cout instead of std::cout.

// ============================================================
// 1) Node structure for doubly linked list
// ============================================================

// Each node stores one student ID.
// It has:
// - prev = points to previous node
// - next = points to next node
struct Node
{
    int studentId;
    Node* prev;
    Node* next;
};

// ============================================================
// 2) Insert at front
// ============================================================

// This function inserts a new node at the beginning of the list.
void insertFront(Node*& head, int id)
{
    Node* newNode = new Node;
    newNode->studentId = id;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
    {
        head->prev = newNode;
    }

    head = newNode;
}

// ============================================================
// 3) Insert at end
// ============================================================

// This function inserts a new node at the end of the list.
void insertEnd(Node*& head, int id)
{
    Node* newNode = new Node;
    newNode->studentId = id;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// ============================================================
// 4) Insert into sorted doubly linked list
// ============================================================

// This function inserts a new student ID into the correct position
// so the list stays sorted in ascending order.
void insertSorted(Node*& head, int id)
{
    Node* newNode = new Node;
    newNode->studentId = id;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    if (id < head->studentId)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->next != NULL && current->next->studentId < id)
    {
        current = current->next;
    }

    newNode->next = current->next;
    newNode->prev = current;

    if (current->next != NULL)
    {
        current->next->prev = newNode;
    }

    current->next = newNode;
}

// ============================================================
// 5) Delete from front
// ============================================================

// This function deletes the first node in the list.
bool deleteFront(Node*& head)
{
    if (head == NULL)
    {
        return false;
    }

    Node* temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    delete temp;
    return true;
}

// ============================================================
// 6) Delete from end
// ============================================================

// This function deletes the last node in the list.
bool deleteEnd(Node*& head)
{
    if (head == NULL)
    {
        return false;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return true;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;

    return true;
}

// ============================================================
// 7) Delete based on user input (student ID)
// ============================================================

// This function deletes a node based on the given student ID.
bool deleteById(Node*& head, int id)
{
    if (head == NULL)
    {
        return false;
    }

    Node* current = head;

    while (current != NULL && current->studentId != id)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        return false;
    }

    if (current == head)
    {
        head = current->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }
    }
    else
    {
        current->prev->next = current->next;

        if (current->next != NULL)
        {
            current->next->prev = current->prev;
        }
    }

    delete current;
    return true;
}

// ============================================================
// 8) Display forward
// ============================================================

// This function displays the list from beginning to end.
void displayForward(Node* head)
{
    if (head == NULL)
    {
        cout << "Student list is empty.\n";
        return;
    }

    cout << "Student list (forward): ";

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->studentId;

        if (temp->next != NULL)
        {
            cout << " <-> ";
        }

        temp = temp->next;
    }

    cout << " -> NULL\n";
}

// ============================================================
// 9) Display reverse
// ============================================================

// This function displays the list from end to beginning.
void displayReverse(Node* head)
{
    if (head == NULL)
    {
        cout << "Student list is empty.\n";
        return;
    }

    Node* temp = head;

    // Move to the last node first.
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    cout << "Student list (reverse): ";

    while (temp != NULL)
    {
        cout << temp->studentId;

        if (temp->prev != NULL)
        {
            cout << " <-> ";
        }

        temp = temp->prev;
    }

    cout << " -> NULL\n";
}

// ============================================================
// 10) Clear memory
// ============================================================

// This function deletes all nodes before the program ends.
void clearList(Node*& head)
{
    while (head != NULL)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// ============================================================
// 11) Main program
// ============================================================

int main()
{
    Node* head = NULL;
    int choice;
    int studentId;

    do
    {
        cout << "\nMenu List:\n";
        cout << "--------------------------\n";
        cout << "1. Add student ID in the front of the list\n";
        cout << "2. Add student ID at the end of the list\n";
        cout << "3. Sort current student list based on ID and display\n";
        cout << "4. Delete student ID from the front of the list\n";
        cout << "5. Delete student ID from the end of the list\n";
        cout << "6. Delete student ID based on the user input\n";
        cout << "7. Display student list\n";
        cout << "8. Display the reverse student list\n";
        cout << "9. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter student ID to add at front: ";
                cin >> studentId;
                insertFront(head, studentId);
                cout << "Student ID inserted at the front successfully.\n";
                break;

            case 2:
                cout << "Enter student ID to add at end: ";
                cin >> studentId;
                insertEnd(head, studentId);
                cout << "Student ID inserted at the end successfully.\n";
                break;

            case 3:
                cout << "Enter student ID to insert into sorted list: ";
                cin >> studentId;
                insertSorted(head, studentId);
                cout << "Student ID inserted into sorted list successfully.\n";
                displayForward(head);
                break;

            case 4:
                if (deleteFront(head))
                {
                    cout << "First student ID deleted successfully.\n";
                }
                else
                {
                    cout << "Cannot delete. Student list is empty.\n";
                }
                break;

            case 5:
                if (deleteEnd(head))
                {
                    cout << "Last student ID deleted successfully.\n";
                }
                else
                {
                    cout << "Cannot delete. Student list is empty.\n";
                }
                break;

            case 6:
                cout << "Enter student ID to delete: ";
                cin >> studentId;

                if (deleteById(head, studentId))
                {
                    cout << "Student ID deleted successfully.\n";
                }
                else
                {
                    cout << "Student ID not found.\n";
                }
                break;

            case 7:
                displayForward(head);
                break;

            case 8:
                displayReverse(head);
                break;

            case 9:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 9);

    clearList(head);

    return 0;
}
