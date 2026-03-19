#include <iostream>
// Lets us use cout (print) and cin (input).

#include <iomanip>
// Lets us format output nicely (setw, fixed, setprecision, left).

#include <string>
// Lets us use the string type and getline().

using namespace std;
// So we can write cout instead of std::cout, string instead of std::string, etc.

// ============================================================
// 1) Node (structure) for linked list
// ============================================================

// This struct is ONE "node" in a linked list.
// Each node stores ONE song's information + a pointer to the next song.
struct Song
{
    int no;
    // Song number (like ID / index).

    string artist;
    // Artist name.

    string title;
    // Song title.

    int released;
    // Released year.

    string genre;
    // Song genre.

    double length;
    // Song length (minutes) like 3.55, 4.30, etc.

    Song* next;
    // Pointer to the next node in the linked list.
    // If this song is the last one, next should be NULL.
};

// ============================================================
// 2) Insert at the beginning (front)
// ============================================================

// Song*& head means:
// - head is passed by reference
// - so when we change head inside this function, it changes head in main()
// This is needed because inserting at front changes who the head is.
void insertFront(Song*& head,
                 int no, string artist, string title,
                 int released, string genre, double length)
{
    Song* newNode = new Song;
    // Create a new Song node in heap memory.
    // newNode now stores the address of this new node.

    newNode->no = no;
    // Put the song number into the new node.

    newNode->artist = artist;
    // Put the artist name into the new node.

    newNode->title = title;
    // Put the song title into the new node.

    newNode->released = released;
    // Put the released year into the new node.

    newNode->genre = genre;
    // Put the genre into the new node.

    newNode->length = length;
    // Put the length into the new node.

    newNode->next = head;
    // IMPORTANT:
    // Make the new node point to the current head.
    // This "connects" the new node in front of the list.
    // Example:
    // Before: head -> A -> B -> NULL
    // After : new -> head(A) -> B -> NULL

    head = newNode;
    // Move head to become the new node.
    // Now the new node is the first node in the list.
}

// ============================================================
// 3) Insert at the end (back)
// ============================================================

// Inserting at end does NOT replace the head (unless list is empty).
// But we still pass head by reference because we might set head when list is empty.
void insertEnd(Song*& head,
               int no, string artist, string title,
               int released, string genre, double length)
{
    Song* newNode = new Song;
    // Create a new Song node in heap memory.

    newNode->no = no;
    // Store the song number in the node.

    newNode->artist = artist;
    // Store the artist.

    newNode->title = title;
    // Store the title.

    newNode->released = released;
    // Store released year.

    newNode->genre = genre;
    // Store genre.

    newNode->length = length;
    // Store length.

    newNode->next = NULL;
    // Since this new node will be at the end,
    // it should point to NULL (no next song yet).

    // --------------------------------------------------------
    // If list is empty, head is NULL
    // --------------------------------------------------------
    if (head == NULL)
    {
        head = newNode;
        // If the list is empty, the new node becomes the first node (head).

        return;
        // Stop the function here because we are done.
    }

    // --------------------------------------------------------
    // If list is not empty, we must find the last node
    // --------------------------------------------------------
    Song* temp = head;
    // temp is a helper pointer used to walk through the list.
    // We start at the first node.

    while (temp->next != NULL)
    {
        // Keep moving forward as long as there is a next node.

        temp = temp->next;
        // Move temp to the next node.
    }

    // After the loop ends:
    // temp is now pointing to the LAST node (because temp->next == NULL).

    temp->next = newNode;
    // Link the last node to the new node.
    // Now the new node becomes the last node.
}

// ============================================================
// 4) Display the list (no sorting)
// ============================================================

// This function prints all songs in the linked list in the current order.
// Song* head is passed by value (copy of pointer),
// so moving head inside this function does NOT affect main's head.
void displayList(Song* head)
{
    if (head == NULL)
    {
        // If head is NULL, there are no nodes in the list.
        cout << "Song list is empty.\n";
        return;
        // Exit the function early.
    }

    // Print table header lines.
    cout << "\n+----+--------------------+----------------------------+----------+------------+--------+\n";
    cout << "| No | Artist             | Song                       | Released | Genre      | Length |\n";
    cout << "+----+--------------------+----------------------------+----------+------------+--------+\n";

    // Traverse the linked list.
    while (head != NULL)
    {
        // head currently points to the "current node" we want to print.

        cout << "| " << setw(2) << left << head->no << " ";
        // setw(2) makes width 2 for the "No" column.
        // left means align text to left side.

        cout << "| " << setw(19) << left << head->artist;
        // setw(19) gives enough space for artist name.

        cout << "| " << setw(27) << left << head->title;
        // setw(27) gives space for song title.

        cout << "| " << setw(9)  << left << head->released;
        // setw(9) for released year column.

        cout << "| " << setw(11) << left << head->genre;
        // setw(11) for genre column.

        cout << "| " << setw(6)  << fixed << setprecision(2) << head->length
             << " |\n";
        // fixed + setprecision(2) means show 2 decimal places for length.
        // Example: 4.30 instead of 4.3

        cout << "+----+--------------------+----------------------------+----------+------------+--------+\n";
        // Print separator line after each row.

        head = head->next;
        // Move to the next node in the list.
        // This is how we "walk" through a linked list.
    }

    cout << endl;
    // Print a blank line at the end for nicer output.
}

// ============================================================
// Helper: read one song from user (simple)
// ============================================================

// This function collects song info from the user.
// It uses references (int& / string& / double&) so the values go back to main.
// If we used normal parameters (without &), main would not receive the values.
void inputSong(int& no, string& artist, string& title, int& released, string& genre, double& length)
{
    cout << "Enter No: ";
    // Ask user for song number.

    cin >> no;
    // Read the number.

    cin.ignore();
    // IMPORTANT:
    // After cin >> no, there is usually a leftover '\n' (newline) in the input buffer.
    // cin.ignore() removes that newline so getline() works correctly.

    cout << "Enter Artist: ";
    // Ask for artist name.

    getline(cin, artist);
    // Use getline to read the whole line (so spaces are allowed).

    cout << "Enter Song Title: ";
    // Ask for title.

    getline(cin, title);
    // Read full title with spaces.

    cout << "Enter Released Year: ";
    // Ask for released year.

    cin >> released;
    // Read the year.

    cin.ignore();
    // Clear leftover newline again before using getline.

    cout << "Enter Genre: ";
    // Ask for genre.

    getline(cin, genre);
    // Read the genre as a full line.

    cout << "Enter Length (example 3.55): ";
    // Ask for song length.

    cin >> length;
    // Read the length (double).

    cin.ignore();
    // Clear leftover newline again (good habit).
}

// ============================================================
// MAIN PROGRAM
// ============================================================

int main()
{
    Song* head = NULL;
    // head points to the first node of the linked list.
    // head = NULL means the list is empty at the start.

    // --------------------------------------------------------
    // Start with the given 3 songs (original list)
    // --------------------------------------------------------

    insertEnd(head, 1, "Celine Dion", "Just Walk Away", 1993, "Pop", 4.58);
    // Insert song #1 at the end. Now list: [1] -> NULL

    insertEnd(head, 2, "Taylor Swift", "You Belong With Me", 2008, "Pop", 3.48);
    // Insert song #2 at the end. Now list: [1] -> [2] -> NULL

    insertEnd(head, 3, "The Cranberries", "Promises", 1999, "Rock", 4.30);
    // Insert song #3 at the end. Now list: [1] -> [2] -> [3] -> NULL

    int choice;
    // This stores the user's menu choice.

    do
    {
        // Print menu each time the loop repeats.
        cout << "===== SIMPLE MUSIC PLAYER (LINKED LIST) =====\n";
        cout << "1. Insert song at beginning (front)\n";
        cout << "2. Insert song at end (back)\n";
        cout << "3. View song list (no sorting)\n";
        cout << "0. Exit\n";
        cout << "Choose: ";

        cin >> choice;
        // Read user's menu choice.

        cin.ignore();
        // Remove leftover newline so future getline() works properly.

        if (choice == 1)
        {
            // If user chooses 1, we will insert at FRONT.

            int no, released;
            // Variables to store song number and released year.

            string artist, title, genre;
            // Strings to store artist, title, and genre.

            double length;
            // Variable to store song length.

            cout << "\n[Insert at FRONT]\n";
            // Print a small heading.

            inputSong(no, artist, title, released, genre, length);
            // Ask user for song details and store into these variables.

            insertFront(head, no, artist, title, released, genre, length);
            // Insert the new song at the front of the linked list.

            cout << "Inserted at front!\n\n";
            // Confirm to user.
        }
        else if (choice == 2)
        {
            // If user chooses 2, we will insert at END.

            int no, released;
            // Variables for ID and year.

            string artist, title, genre;
            // Variables for strings.

            double length;
            // Variable for song length.

            cout << "\n[Insert at END]\n";
            // Print a heading.

            inputSong(no, artist, title, released, genre, length);
            // Read song details.

            insertEnd(head, no, artist, title, released, genre, length);
            // Insert at end.

            cout << "Inserted at end!\n\n";
            // Confirm to user.
        }
        else if (choice == 3)
        {
            // If user chooses 3, show the list.
            displayList(head);
            // Print all songs.
        }
        else if (choice == 0)
        {
            // If user chooses 0, exit.
            cout << "Bye!\n";
        }
        else
        {
            // If user types something not 0,1,2,3.
            cout << "Invalid choice. Try again.\n\n";
        }

    } while (choice != 0);
    // This loop repeats until the user enters 0.

    // =========================================================
    // EXTRA IMPORTANT NOTES (WHY THIS PROGRAM WORKS)
    // =========================================================
    // 1) A linked list is made of nodes that point to the next node.
    // 2) "head" always stores the address of the first node.
    // 3) insertFront changes head (new node becomes first).
    // 4) insertEnd must walk to the last node to attach the new node.
    // 5) displayList walks through the list until it reaches NULL.
    // 6) NULL means "end of the list".
    //
    // MEMORY NOTE:
    // We used "new" many times, but we never used "delete".
    // That means memory is not freed (memory leak).
    // For lab/exam, this may be okay, but in real programs we should:
    // - traverse and delete every node before program ends.

    return 0;
    // End the program successfully.
}
