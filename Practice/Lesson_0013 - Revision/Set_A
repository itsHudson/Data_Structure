## Question 1
**Question:** What advantage does a linked list have over an array?

**Options:**
- **A.** The linked list does not have a size limit.
- **B.** Elements can be added or removed from the middle of the list easily.
- **C.** The size of the list does not need to be declared at the beginning of the program.
- **D.** All of the above.

**Answer:** **D. All of the above**

**Explanation:**  
A linked list is dynamic in size, allows easy insertion and deletion, and does not require size declaration at the start of the program.





---





## Question 2
**Question:** Based on the diagram, when the display linked list function is used to show the content from the head to the end of the list, what is the height order?

**Options:**
- **A.** 157.60, 163.55, 178.60, 148.60
- **B.** 157.60, 148.60, 163.55, 178.60
- **C.** 148.60, 157.60, 163.55, 178.60
- **D.** 178.60, 163.55, 148.60, 157.60

**Answer:** **B. 157.60, 148.60, 163.55, 178.60**

**Explanation:**  
The linked list is displayed by following the `next` pointers from the head node until the end of the list.





---





## Question 3
**Question:** Write a C++ structure named **Patient** to contain the data shown in the figure.

**Answer:**
```cpp
struct Patient {
    string name;
    char gender;
    float height;
    int age;
    float weight;
    Patient* next;
};
```





---





## Question 4
**Question:** Write C++ code to insert a new node with info **15** between **39** and **52**.

**Answer:** Insert after node with value **39**

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = new Node{13, nullptr};
    Node* n2 = new Node{36, nullptr};
    Node* n3 = new Node{39, nullptr};
    Node* n4 = new Node{52, nullptr};
    Node* n5 = new Node{65, nullptr};

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Node* newNode = new Node{15, nullptr};

    Node* current = head;

    while (current->data != 39) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
```





---





## Question 5
**Question:** Write C++ code to delete the node with info **52**.

**Answer:** Delete a middle node

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = new Node{13, nullptr};
    Node* n2 = new Node{36, nullptr};
    Node* n3 = new Node{39, nullptr};
    Node* n4 = new Node{52, nullptr};
    Node* n5 = new Node{65, nullptr};

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Node* current = head;

    while (current->next->data != 52) {
        current = current->next;
    }

    Node* temp = current->next;
    current->next = temp->next;

    delete temp;

    Node* ptr = head;

    while (ptr != nullptr) {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }

    cout << "NULL";

    return 0;
}
```
