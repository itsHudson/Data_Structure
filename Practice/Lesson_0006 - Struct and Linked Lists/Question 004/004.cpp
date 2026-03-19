#include <iostream>
// This library allows us to print output to the screen using cout
// and move to a new line using endl.

using namespace std;
// This allows us to use cout instead of std::cout.
// It makes the code simpler for beginners.

// ============================================================
// STEP 1: Define the structure (a linked list node)
// ============================================================

// This structure represents ONE student node in a linked list.
struct Student
{
    int student_id;
    // This variable stores the student ID (data part of the node).

    Student* next;
    // This is a pointer to another Student structure.
    // It stores the address of the NEXT node.
    // If this is the last node, it will store NULL.
};

int main()
{
    // =========================================================
    // STEP 2: Create one node
    // =========================================================

    Student* head = new Student;
    // "new Student" creates a Student object in heap memory.
    // head is a pointer that stores the address of this object.
    // This node will be the FIRST node of the linked list.
    // Since this is the first node, we call it "head".

    // =========================================================
    // STEP 3: Assign values to the node
    // =========================================================

    head->student_id = 1001;
    // Using the arrow operator (->) because head is a pointer.
    // This means:
    // Go to the Student object that head points to,
    // then store 1001 in student_id.

    head->next = NULL;
    // Set next to NULL.
    // This means there is NO next node.
    // So this node is the LAST (and only) node in the list.

    // =========================================================
    // STEP 4: Display the data
    // =========================================================

    cout << "Student ID: " << head->student_id << endl;
    // This prints the student ID stored inside the node.

    cout << "Next address: " << head->next << endl;
    // This prints the value of next.
    // Since next is NULL, it will show 0 or 0x0.
    // This confirms that the list ends here.

    // =========================================================
    // EXTRA BEGINNER NOTES (IMPORTANT)
    // =========================================================
    // 1. This program creates a linked list with ONLY ONE node.
    // 2. The structure in memory looks like this:
    //
    //    head --> [ student_id = 1001 | next = NULL ]
    //
    // 3. We used dynamic memory (new),
    //    so in real programs we should free memory:
    //
    //    delete head;
    //    head = NULL;
    //
    // 4. If we add another node later,
    //    head->next will point to that new node.

    return 0;
    // End of the program.
}
