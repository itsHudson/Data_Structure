// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries for input/output, formatting,
//           and string handling
// ==========================================================

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



// ==========================================================
// CATEGORY: Structure Definition
// Purpose : Define one Song node for a doubly linked list
// ==========================================================

struct Song
{
    int SongNumber;
    // Variable storing the song number

    string ArtistName;
    // Variable storing the artist name

    string SongTitle;
    // Variable storing the song title

    int ReleasedYear;
    // Variable storing the released year

    string SongGenre;
    // Variable storing the song genre

    double SongLength;
    // Variable storing the song length in minutes

    Song* PreviousNode;
    // Pointer storing the address of the previous node

    Song* NextNode;
    // Pointer storing the address of the next node
};



// ==========================================================
// CATEGORY: Function - Insert At Front
// Purpose : Insert a new song node at the beginning
//           of the doubly linked list
// ==========================================================

void InsertFront(Song*& HeadPointer, Song*& TailPointer,
                 int SongNumberValue,
                 string ArtistNameValue,
                 string SongTitleValue,
                 int ReleasedYearValue,
                 string SongGenreValue,
                 double SongLengthValue)
{
    Song* NewSongNode = new Song;
    // Allocate memory for a new song node

    NewSongNode->SongNumber = SongNumberValue;
    // Store song number

    NewSongNode->ArtistName = ArtistNameValue;
    // Store artist name

    NewSongNode->SongTitle = SongTitleValue;
    // Store song title

    NewSongNode->ReleasedYear = ReleasedYearValue;
    // Store released year

    NewSongNode->SongGenre = SongGenreValue;
    // Store genre

    NewSongNode->SongLength = SongLengthValue;
    // Store song length

    NewSongNode->PreviousNode = NULL;
    // First node should not have a previous node

    NewSongNode->NextNode = HeadPointer;
    // Link new node to current head node

    if (HeadPointer != NULL)
    {
        HeadPointer->PreviousNode = NewSongNode;
        // Old head points back to new node
    }
    else
    {
        TailPointer = NewSongNode;
        // If list was empty, new node is also the tail
    }

    HeadPointer = NewSongNode;
    // Move head pointer to the new node
}



// ==========================================================
// CATEGORY: Function - Insert At End
// Purpose : Insert a new song node at the end
//           of the doubly linked list
// ==========================================================

void InsertEnd(Song*& HeadPointer, Song*& TailPointer,
               int SongNumberValue,
               string ArtistNameValue,
               string SongTitleValue,
               int ReleasedYearValue,
               string SongGenreValue,
               double SongLengthValue)
{
    Song* NewSongNode = new Song;
    // Allocate memory for a new song node

    NewSongNode->SongNumber = SongNumberValue;
    NewSongNode->ArtistName = ArtistNameValue;
    NewSongNode->SongTitle = SongTitleValue;
    NewSongNode->ReleasedYear = ReleasedYearValue;
    NewSongNode->SongGenre = SongGenreValue;
    NewSongNode->SongLength = SongLengthValue;
    // Store all song information

    NewSongNode->PreviousNode = TailPointer;
    // New node points back to current tail

    NewSongNode->NextNode = NULL;
    // Last node should point to NULL

    if (TailPointer != NULL)
    {
        TailPointer->NextNode = NewSongNode;
        // Old tail points forward to new node
    }
    else
    {
        HeadPointer = NewSongNode;
        // If list was empty, new node also becomes head
    }

    TailPointer = NewSongNode;
    // Move tail pointer to the new node
}



// ==========================================================
// CATEGORY: Function - Insert At Position
// Purpose : Insert a new song node at a specific position
//           in the doubly linked list
// ==========================================================

bool InsertAtPosition(Song*& HeadPointer, Song*& TailPointer,
                      int PositionValue,
                      int SongNumberValue,
                      string ArtistNameValue,
                      string SongTitleValue,
                      int ReleasedYearValue,
                      string SongGenreValue,
                      double SongLengthValue)
{
    if (PositionValue <= 0)
    {
        return false;
        // Position must start from 1
    }

    if (PositionValue == 1)
    {
        InsertFront(HeadPointer, TailPointer,
                    SongNumberValue,
                    ArtistNameValue,
                    SongTitleValue,
                    ReleasedYearValue,
                    SongGenreValue,
                    SongLengthValue);
        return true;
    }

    Song* CurrentPointer = HeadPointer;
    // Pointer used to traverse the list

    int CurrentPosition = 1;
    // Variable used to track the current position

    while (CurrentPointer != NULL && CurrentPosition < PositionValue - 1)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move to next node

        CurrentPosition++;
        // Increase current position
    }

    if (CurrentPointer == NULL)
    {
        return false;
        // Position is beyond the list length
    }

    if (CurrentPointer->NextNode == NULL)
    {
        InsertEnd(HeadPointer, TailPointer,
                  SongNumberValue,
                  ArtistNameValue,
                  SongTitleValue,
                  ReleasedYearValue,
                  SongGenreValue,
                  SongLengthValue);
        return true;
    }

    Song* NewSongNode = new Song;
    // Allocate memory for a new song node

    NewSongNode->SongNumber = SongNumberValue;
    NewSongNode->ArtistName = ArtistNameValue;
    NewSongNode->SongTitle = SongTitleValue;
    NewSongNode->ReleasedYear = ReleasedYearValue;
    NewSongNode->SongGenre = SongGenreValue;
    NewSongNode->SongLength = SongLengthValue;
    // Store song information

    NewSongNode->NextNode = CurrentPointer->NextNode;
    // Link new node to the next existing node

    NewSongNode->PreviousNode = CurrentPointer;
    // Link new node back to current node

    CurrentPointer->NextNode->PreviousNode = NewSongNode;
    // Existing next node points back to new node

    CurrentPointer->NextNode = NewSongNode;
    // Current node points forward to new node

    return true;
}



// ==========================================================
// CATEGORY: Function - Insert Sorted
// Purpose : Insert a new song node into the correct position
//           so the doubly linked list stays sorted by song number
// ==========================================================

void InsertSorted(Song*& SortedHeadPointer, Song*& SortedTailPointer,
                  int SongNumberValue,
                  string ArtistNameValue,
                  string SongTitleValue,
                  int ReleasedYearValue,
                  string SongGenreValue,
                  double SongLengthValue)
{
    Song* NewSongNode = new Song;
    // Allocate memory for a new song node

    NewSongNode->SongNumber = SongNumberValue;
    NewSongNode->ArtistName = ArtistNameValue;
    NewSongNode->SongTitle = SongTitleValue;
    NewSongNode->ReleasedYear = ReleasedYearValue;
    NewSongNode->SongGenre = SongGenreValue;
    NewSongNode->SongLength = SongLengthValue;
    // Store song information

    NewSongNode->PreviousNode = NULL;
    NewSongNode->NextNode = NULL;
    // Initialize both pointers to NULL

    if (SortedHeadPointer == NULL)
    {
        SortedHeadPointer = NewSongNode;
        SortedTailPointer = NewSongNode;
        // If sorted list is empty, new node becomes both head and tail

        return;
    }

    if (SongNumberValue < SortedHeadPointer->SongNumber)
    {
        NewSongNode->NextNode = SortedHeadPointer;
        // New node points to current sorted head

        SortedHeadPointer->PreviousNode = NewSongNode;
        // Current sorted head points back to new node

        SortedHeadPointer = NewSongNode;
        // New node becomes the sorted head

        return;
    }

    Song* CurrentPointer = SortedHeadPointer;
    // Pointer used to find correct sorted position

    while (CurrentPointer->NextNode != NULL &&
           CurrentPointer->NextNode->SongNumber < SongNumberValue)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move forward until correct position is found
    }

    NewSongNode->NextNode = CurrentPointer->NextNode;
    // Link new node to next node

    NewSongNode->PreviousNode = CurrentPointer;
    // Link new node back to current node

    if (CurrentPointer->NextNode != NULL)
    {
        CurrentPointer->NextNode->PreviousNode = NewSongNode;
        // Existing next node points back to new node
    }
    else
    {
        SortedTailPointer = NewSongNode;
        // If inserted at the end, update sorted tail
    }

    CurrentPointer->NextNode = NewSongNode;
    // Current node points forward to new node
}



// ==========================================================
// CATEGORY: Function - Display List
// Purpose : Display the current doubly linked list
// ==========================================================

void DisplayList(Song* HeadPointer)
{
    if (HeadPointer == NULL)
    {
        cout << "Song list is empty.\n";
        // Display message if list is empty

        return;
    }

    cout << "\n+----+----------------------+------------------------------+----------+------------+--------+\n";
    cout << "| No | Artist               | Song                         | Released | Genre      | Length |\n";
    cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
    // Print table header

    Song* TraversalPointer = HeadPointer;
    // Temporary pointer used to traverse the list

    while (TraversalPointer != NULL)
    {
        cout << "| " << setw(2) << left << TraversalPointer->SongNumber << " ";
        cout << "| " << setw(20) << left << TraversalPointer->ArtistName;
        cout << "| " << setw(28) << left << TraversalPointer->SongTitle;
        cout << "| " << setw(9) << left << TraversalPointer->ReleasedYear;
        cout << "| " << setw(11) << left << TraversalPointer->SongGenre;
        cout << "| " << setw(6) << fixed << setprecision(2)
             << TraversalPointer->SongLength << " |\n";
        // Display one row of song information

        cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
        // Print separator row

        TraversalPointer = TraversalPointer->NextNode;
        // Move to the next node
    }

    cout << endl;
    // Print blank line after display
}



// ==========================================================
// CATEGORY: Function - Display Sorted By Song Number
// Purpose : Create a temporary sorted copy of the list,
//           display it, then delete it
// ==========================================================

void DisplaySortedBySongNumber(Song* HeadPointer)
{
    if (HeadPointer == NULL)
    {
        cout << "Song list is empty.\n";
        // Display message if list is empty

        return;
    }

    Song* SortedHeadPointer = NULL;
    Song* SortedTailPointer = NULL;
    // Temporary head and tail for sorted list

    Song* TraversalPointer = HeadPointer;
    // Pointer used to traverse original list

    while (TraversalPointer != NULL)
    {
        InsertSorted(SortedHeadPointer, SortedTailPointer,
                     TraversalPointer->SongNumber,
                     TraversalPointer->ArtistName,
                     TraversalPointer->SongTitle,
                     TraversalPointer->ReleasedYear,
                     TraversalPointer->SongGenre,
                     TraversalPointer->SongLength);
        // Insert each original song into sorted temporary list

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next original node
    }

    cout << "\n[Song List Sorted by Song Number]\n";
    // Display sorted list heading

    DisplayList(SortedHeadPointer);
    // Display the temporary sorted list

    while (SortedHeadPointer != NULL)
    {
        Song* NodeToDelete = SortedHeadPointer;
        // Store current sorted head node

        SortedHeadPointer = SortedHeadPointer->NextNode;
        // Move to next node

        delete NodeToDelete;
        // Delete old node to avoid memory leak
    }

    SortedTailPointer = NULL;
    // Reset sorted tail pointer
}



// ==========================================================
// CATEGORY: Function - View One By One
// Purpose : Simulate Previous and Next navigation
//           in a doubly linked list
// ==========================================================

void ViewOneByOne(Song* HeadPointer)
{
    if (HeadPointer == NULL)
    {
        cout << "Song list is empty.\n";
        // Display message if list is empty

        return;
    }

    Song* CurrentPointer = HeadPointer;
    // Start from the head node

    char UserCommand;
    // Variable storing user navigation command

    do
    {
        cout << "\n========================================\n";
        cout << "Current Song\n";
        cout << "========================================\n";
        cout << "No       : " << CurrentPointer->SongNumber << endl;
        cout << "Artist   : " << CurrentPointer->ArtistName << endl;
        cout << "Song     : " << CurrentPointer->SongTitle << endl;
        cout << "Released : " << CurrentPointer->ReleasedYear << endl;
        cout << "Genre    : " << CurrentPointer->SongGenre << endl;
        cout << "Length   : " << fixed << setprecision(2)
             << CurrentPointer->SongLength << endl;
        cout << "========================================\n";
        cout << "P = Previous | N = Next | Q = Quit\n";
        cout << "Enter command: ";
        // Display current song information and navigation commands

        cin >> UserCommand;
        // Read navigation command

        if (UserCommand == 'P' || UserCommand == 'p')
        {
            if (CurrentPointer->PreviousNode != NULL)
            {
                CurrentPointer = CurrentPointer->PreviousNode;
                // Move to previous node
            }
            else
            {
                cout << "This is the first song.\n";
                // Cannot move before the first node
            }
        }
        else if (UserCommand == 'N' || UserCommand == 'n')
        {
            if (CurrentPointer->NextNode != NULL)
            {
                CurrentPointer = CurrentPointer->NextNode;
                // Move to next node
            }
            else
            {
                cout << "This is the last song.\n";
                // Cannot move after the last node
            }
        }
        else if (UserCommand == 'Q' || UserCommand == 'q')
        {
            cout << "Exit one-by-one view.\n";
            // Exit message
        }
        else
        {
            cout << "Invalid command.\n";
            // Handle invalid command
        }

    } while (UserCommand != 'Q' && UserCommand != 'q');
    // Repeat until user chooses Quit
}



// ==========================================================
// CATEGORY: Function - Delete Front
// Purpose : Delete the first node in the doubly linked list
// ==========================================================

bool DeleteFront(Song*& HeadPointer, Song*& TailPointer)
{
    if (HeadPointer == NULL)
    {
        return false;
        // Cannot delete from empty list
    }

    Song* NodeToDelete = HeadPointer;
    // Store current head node

    if (HeadPointer == TailPointer)
    {
        HeadPointer = NULL;
        TailPointer = NULL;
        // If only one node exists, reset both head and tail
    }
    else
    {
        HeadPointer = HeadPointer->NextNode;
        // Move head to next node

        HeadPointer->PreviousNode = NULL;
        // New head should not have a previous node
    }

    delete NodeToDelete;
    // Delete old head node

    return true;
}



// ==========================================================
// CATEGORY: Function - Delete End
// Purpose : Delete the last node in the doubly linked list
// ==========================================================

bool DeleteEnd(Song*& HeadPointer, Song*& TailPointer)
{
    if (TailPointer == NULL)
    {
        return false;
        // Cannot delete from empty list
    }

    Song* NodeToDelete = TailPointer;
    // Store current tail node

    if (HeadPointer == TailPointer)
    {
        HeadPointer = NULL;
        TailPointer = NULL;
        // If only one node exists, reset both head and tail
    }
    else
    {
        TailPointer = TailPointer->PreviousNode;
        // Move tail to previous node

        TailPointer->NextNode = NULL;
        // New tail should not have a next node
    }

    delete NodeToDelete;
    // Delete old tail node

    return true;
}



// ==========================================================
// CATEGORY: Function - Delete By Artist
// Purpose : Delete the first matching song by artist name
// ==========================================================

bool DeleteByArtist(Song*& HeadPointer, Song*& TailPointer, const string& TargetArtistName)
{
    if (HeadPointer == NULL)
    {
        return false;
        // Cannot delete from empty list
    }

    Song* CurrentPointer = HeadPointer;
    // Pointer used to search for matching artist name

    while (CurrentPointer != NULL &&
           CurrentPointer->ArtistName != TargetArtistName)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move until matching artist is found
    }

    if (CurrentPointer == NULL)
    {
        return false;
        // Artist not found
    }

    if (CurrentPointer == HeadPointer && CurrentPointer == TailPointer)
    {
        HeadPointer = NULL;
        TailPointer = NULL;
        // If list has only one node, reset both pointers
    }
    else if (CurrentPointer == HeadPointer)
    {
        HeadPointer = HeadPointer->NextNode;
        HeadPointer->PreviousNode = NULL;
        // Remove first node
    }
    else if (CurrentPointer == TailPointer)
    {
        TailPointer = TailPointer->PreviousNode;
        TailPointer->NextNode = NULL;
        // Remove last node
    }
    else
    {
        CurrentPointer->PreviousNode->NextNode = CurrentPointer->NextNode;
        CurrentPointer->NextNode->PreviousNode = CurrentPointer->PreviousNode;
        // Remove middle node by reconnecting surrounding nodes
    }

    delete CurrentPointer;
    // Delete matched node

    return true;
}



// ==========================================================
// CATEGORY: Function - Search By Genre
// Purpose : Search and display songs matching a genre
// ==========================================================

bool SearchByGenre(Song* HeadPointer, const string& TargetGenre)
{
    if (HeadPointer == NULL)
    {
        cout << "Song list is empty.\n";
        // Display message if list is empty

        return false;
    }

    bool IsSongFound = false;
    // Flag tracking whether any matching song is found

    cout << "\n[Search Result for Genre: " << TargetGenre << "]\n";
    cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
    cout << "| No | Artist               | Song                         | Released | Genre      | Length |\n";
    cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
    // Print search result table header

    Song* TraversalPointer = HeadPointer;
    // Pointer used to traverse the list

    while (TraversalPointer != NULL)
    {
        if (TraversalPointer->SongGenre == TargetGenre)
        {
            cout << "| " << setw(2) << left << TraversalPointer->SongNumber << " ";
            cout << "| " << setw(20) << left << TraversalPointer->ArtistName;
            cout << "| " << setw(28) << left << TraversalPointer->SongTitle;
            cout << "| " << setw(9) << left << TraversalPointer->ReleasedYear;
            cout << "| " << setw(11) << left << TraversalPointer->SongGenre;
            cout << "| " << setw(6) << fixed << setprecision(2)
                 << TraversalPointer->SongLength << " |\n";
            cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
            // Display one matched row

            IsSongFound = true;
            // Mark that at least one song was found
        }

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next node
    }

    if (!IsSongFound)
    {
        cout << "No songs found for this genre.\n\n";
        // Display message if no matching song exists
    }
    else
    {
        cout << endl;
        // Print blank line after matches
    }

    return IsSongFound;
}



// ==========================================================
// CATEGORY: Function - Input Song
// Purpose : Read one song's information from the user
// ==========================================================

void InputSong(int& SongNumberValue,
               string& ArtistNameValue,
               string& SongTitleValue,
               int& ReleasedYearValue,
               string& SongGenreValue,
               double& SongLengthValue)
{
    cout << "Enter song number: ";
    cin >> SongNumberValue;
    // Read song number

    cin.ignore();
    // Clear leftover newline

    cout << "Enter artist name: ";
    getline(cin, ArtistNameValue);
    // Read full artist name

    cout << "Enter song title: ";
    getline(cin, SongTitleValue);
    // Read full song title

    cout << "Enter released year: ";
    cin >> ReleasedYearValue;
    // Read released year

    cin.ignore();
    // Clear leftover newline

    cout << "Enter genre: ";
    getline(cin, SongGenreValue);
    // Read song genre

    cout << "Enter song length: ";
    cin >> SongLengthValue;
    // Read song length

    cin.ignore();
    // Clear leftover newline
}



// ==========================================================
// CATEGORY: Function - Clear List
// Purpose : Delete all nodes before the program ends
// ==========================================================

void ClearList(Song*& HeadPointer, Song*& TailPointer)
{
    while (HeadPointer != NULL)
    {
        Song* NodeToDelete = HeadPointer;
        // Store current head node

        HeadPointer = HeadPointer->NextNode;
        // Move to next node

        delete NodeToDelete;
        // Delete old node
    }

    TailPointer = NULL;
    // Reset tail pointer
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    Song* HeadPointer = NULL;
    // Doubly linked list starts empty

    Song* TailPointer = NULL;
    // Tail pointer also starts empty

    InsertEnd(HeadPointer, TailPointer,
              1, "Celine Dion", "Just Walk Away", 1993, "Pop", 4.58);
    // Insert first default song

    InsertEnd(HeadPointer, TailPointer,
              2, "Taylor Swift", "You Belong With Me", 2008, "Pop", 3.48);
    // Insert second default song

    InsertEnd(HeadPointer, TailPointer,
              3, "The Cranberries", "Promises", 1999, "Rock", 4.30);
    // Insert third default song

    int UserChoice;
    // Variable storing menu choice

    do
    {
        cout << "========== DOUBLY LINKED LIST MUSIC PLAYER ==========\n";
        cout << "1. Add new song at beginning\n";
        cout << "2. Add new song at end\n";
        cout << "3. Add new song at any position\n";
        cout << "4. View song list without sorting\n";
        cout << "5. View song list sorted by song number\n";
        cout << "6. View single song list one by one (Previous / Next)\n";
        cout << "7. Delete a song from beginning\n";
        cout << "8. Delete a song from end\n";
        cout << "9. Delete a song based on artist name\n";
        cout << "10. Search a song based on genre\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        // Display menu options

        cin >> UserChoice;
        // Read user menu choice

        cin.ignore();
        // Clear leftover newline

        if (UserChoice == 1)
        {
            int SongNumberValue;
            int ReleasedYearValue;
            string ArtistNameValue;
            string SongTitleValue;
            string SongGenreValue;
            double SongLengthValue;
            // Variables used to store song input

            cout << "\n[Add New Song at Beginning]\n";

            InputSong(SongNumberValue,
                      ArtistNameValue,
                      SongTitleValue,
                      ReleasedYearValue,
                      SongGenreValue,
                      SongLengthValue);
            // Read one song from user

            InsertFront(HeadPointer, TailPointer,
                        SongNumberValue,
                        ArtistNameValue,
                        SongTitleValue,
                        ReleasedYearValue,
                        SongGenreValue,
                        SongLengthValue);
            // Insert song at beginning

            cout << "Song inserted at beginning successfully.\n\n";
        }
        else if (UserChoice == 2)
        {
            int SongNumberValue;
            int ReleasedYearValue;
            string ArtistNameValue;
            string SongTitleValue;
            string SongGenreValue;
            double SongLengthValue;
            // Variables used to store song input

            cout << "\n[Add New Song at End]\n";

            InputSong(SongNumberValue,
                      ArtistNameValue,
                      SongTitleValue,
                      ReleasedYearValue,
                      SongGenreValue,
                      SongLengthValue);
            // Read one song from user

            InsertEnd(HeadPointer, TailPointer,
                      SongNumberValue,
                      ArtistNameValue,
                      SongTitleValue,
                      ReleasedYearValue,
                      SongGenreValue,
                      SongLengthValue);
            // Insert song at end

            cout << "Song inserted at end successfully.\n\n";
        }
        else if (UserChoice == 3)
        {
            int PositionValue;
            int SongNumberValue;
            int ReleasedYearValue;
            string ArtistNameValue;
            string SongTitleValue;
            string SongGenreValue;
            double SongLengthValue;
            // Variables used to store position and song input

            cout << "\n[Add New Song at Any Position]\n";
            cout << "Enter position: ";
            cin >> PositionValue;
            // Read position value

            cin.ignore();
            // Clear leftover newline

            InputSong(SongNumberValue,
                      ArtistNameValue,
                      SongTitleValue,
                      ReleasedYearValue,
                      SongGenreValue,
                      SongLengthValue);
            // Read one song from user

            if (InsertAtPosition(HeadPointer, TailPointer,
                                 PositionValue,
                                 SongNumberValue,
                                 ArtistNameValue,
                                 SongTitleValue,
                                 ReleasedYearValue,
                                 SongGenreValue,
                                 SongLengthValue))
            {
                cout << "Song inserted successfully at position "
                     << PositionValue << ".\n\n";
            }
            else
            {
                cout << "Invalid position.\n\n";
            }
        }
        else if (UserChoice == 4)
        {
            cout << "\n[View Song List Without Sorting]\n";
            DisplayList(HeadPointer);
            // Display current doubly linked list
        }
        else if (UserChoice == 5)
        {
            DisplaySortedBySongNumber(HeadPointer);
            // Display temporary sorted list
        }
        else if (UserChoice == 6)
        {
            ViewOneByOne(HeadPointer);
            // Navigate song by song using Previous / Next
        }
        else if (UserChoice == 7)
        {
            cout << "\n[Delete Song from Beginning]\n";

            if (DeleteFront(HeadPointer, TailPointer))
            {
                cout << "First song deleted successfully.\n\n";
            }
            else
            {
                cout << "Song list is empty.\n\n";
            }
        }
        else if (UserChoice == 8)
        {
            cout << "\n[Delete Song from End]\n";

            if (DeleteEnd(HeadPointer, TailPointer))
            {
                cout << "Last song deleted successfully.\n\n";
            }
            else
            {
                cout << "Song list is empty.\n\n";
            }
        }
        else if (UserChoice == 9)
        {
            string TargetArtistName;
            // Variable storing artist name to delete

            cout << "\n[Delete Song by Artist Name]\n";
            cout << "Enter artist name to delete: ";
            getline(cin, TargetArtistName);
            // Read artist name

            if (DeleteByArtist(HeadPointer, TailPointer, TargetArtistName))
            {
                cout << "Song by artist \"" << TargetArtistName
                     << "\" deleted successfully.\n\n";
            }
            else
            {
                cout << "Artist not found.\n\n";
            }
        }
        else if (UserChoice == 10)
        {
            string TargetGenre;
            // Variable storing target genre

            cout << "\n[Search Song by Genre]\n";
            cout << "Enter genre to search: ";
            getline(cin, TargetGenre);
            // Read genre

            SearchByGenre(HeadPointer, TargetGenre);
            // Search and display songs by genre
        }
        else if (UserChoice == 0)
        {
            cout << "Exiting program...\n";
            // Exit message
        }
        else
        {
            cout << "Invalid choice. Try again.\n\n";
            // Handle invalid menu choice
        }

    } while (UserChoice != 0);
    // Repeat menu until user chooses Exit

    ClearList(HeadPointer, TailPointer);
    // Free all remaining nodes before program ends

    return 0;
}
