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
// Purpose : Define one Song node for the linked list
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

    Song* NextNode;
    // Pointer storing the address of the next song node
};



// ==========================================================
// CATEGORY: Function - Insert At Front
// Purpose : Insert a new song node at the beginning
//           of the linked list
// ==========================================================

void InsertFront(Song*& HeadPointer,
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

    NewSongNode->NextNode = HeadPointer;
    // Make the new node point to the current head

    HeadPointer = NewSongNode;
    // Move head pointer to the new node
}



// ==========================================================
// CATEGORY: Function - Insert At End
// Purpose : Insert a new song node at the end
//           of the linked list
// ==========================================================

void InsertEnd(Song*& HeadPointer,
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
    NewSongNode->NextNode = NULL;
    // New end node should point to NULL

    if (HeadPointer == NULL)
    {
        HeadPointer = NewSongNode;
        // If list is empty, new node becomes the head

        return;
        // Stop function here
    }

    Song* TraversalPointer = HeadPointer;
    // Temporary pointer used to walk through the list

    while (TraversalPointer->NextNode != NULL)
    {
        TraversalPointer = TraversalPointer->NextNode;
        // Move forward until reaching the last node
    }

    TraversalPointer->NextNode = NewSongNode;
    // Attach new node to the end of the list
}



// ==========================================================
// CATEGORY: Function - Insert Sorted
// Purpose : Insert a new song node into the correct position
//           so the linked list stays sorted by song number
// ==========================================================

void InsertSorted(Song*& HeadPointer,
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
    NewSongNode->NextNode = NULL;

    if (HeadPointer == NULL || SongNumberValue < HeadPointer->SongNumber)
    {
        NewSongNode->NextNode = HeadPointer;
        // Link new node before current head

        HeadPointer = NewSongNode;
        // New node becomes the first node

        return;
    }

    Song* CurrentPointer = HeadPointer;
    // Temporary pointer used to find correct insertion position

    while (CurrentPointer->NextNode != NULL &&
           CurrentPointer->NextNode->SongNumber < SongNumberValue)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move until correct insertion position is found
    }

    NewSongNode->NextNode = CurrentPointer->NextNode;
    // Link new node to the next node

    CurrentPointer->NextNode = NewSongNode;
    // Link current node to the new node
}



// ==========================================================
// CATEGORY: Function - Display List
// Purpose : Display all songs in current linked list order
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

    while (HeadPointer != NULL)
    {
        cout << "| " << setw(2) << left << HeadPointer->SongNumber << " ";
        // Display song number

        cout << "| " << setw(20) << left << HeadPointer->ArtistName;
        // Display artist name

        cout << "| " << setw(28) << left << HeadPointer->SongTitle;
        // Display song title

        cout << "| " << setw(9) << left << HeadPointer->ReleasedYear;
        // Display released year

        cout << "| " << setw(11) << left << HeadPointer->SongGenre;
        // Display genre

        cout << "| " << setw(6) << fixed << setprecision(2)
             << HeadPointer->SongLength << " |\n";
        // Display song length with 2 decimal places

        cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
        // Print separator row

        HeadPointer = HeadPointer->NextNode;
        // Move to the next node
    }

    cout << endl;
    // Print blank line after display
}



// ==========================================================
// CATEGORY: Function - Display Sorted By Song Number
// Purpose : Create a temporary sorted linked list,
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
    // Temporary head pointer for sorted linked list

    Song* TraversalPointer = HeadPointer;
    // Pointer used to walk through original list

    while (TraversalPointer != NULL)
    {
        InsertSorted(SortedHeadPointer,
                     TraversalPointer->SongNumber,
                     TraversalPointer->ArtistName,
                     TraversalPointer->SongTitle,
                     TraversalPointer->ReleasedYear,
                     TraversalPointer->SongGenre,
                     TraversalPointer->SongLength);
        // Insert each original song into temporary sorted list

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next node in original list
    }

    cout << "\n[Song List Sorted by Song Number]\n";
    // Display sorted list heading

    DisplayList(SortedHeadPointer);
    // Display temporary sorted linked list

    while (SortedHeadPointer != NULL)
    {
        Song* NodeToDelete = SortedHeadPointer;
        // Store current node for deletion

        SortedHeadPointer = SortedHeadPointer->NextNode;
        // Move head to next node

        delete NodeToDelete;
        // Delete old node to avoid memory leak
    }
}



// ==========================================================
// CATEGORY: Function - Delete Front
// Purpose : Delete the first song node in the list
// ==========================================================

bool DeleteFront(Song*& HeadPointer)
{
    if (HeadPointer == NULL)
    {
        return false;
        // Nothing to delete if list is empty
    }

    Song* NodeToDelete = HeadPointer;
    // Store current head for deletion

    HeadPointer = HeadPointer->NextNode;
    // Move head to second node

    delete NodeToDelete;
    // Delete old first node

    return true;
}



// ==========================================================
// CATEGORY: Function - Delete End
// Purpose : Delete the last song node in the list
// ==========================================================

bool DeleteEnd(Song*& HeadPointer)
{
    if (HeadPointer == NULL)
    {
        return false;
        // Cannot delete from empty list
    }

    if (HeadPointer->NextNode == NULL)
    {
        delete HeadPointer;
        // Delete the only node in the list

        HeadPointer = NULL;
        // Reset head to NULL

        return true;
    }

    Song* CurrentPointer = HeadPointer;
    // Temporary pointer used to find second last node

    while (CurrentPointer->NextNode->NextNode != NULL)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move until second last node is reached
    }

    delete CurrentPointer->NextNode;
    // Delete last node

    CurrentPointer->NextNode = NULL;
    // Second last node becomes the last node

    return true;
}



// ==========================================================
// CATEGORY: Function - Delete By Artist
// Purpose : Delete the first matching song by artist name
// ==========================================================

bool DeleteByArtist(Song*& HeadPointer, const string& TargetArtistName)
{
    if (HeadPointer == NULL)
    {
        return false;
        // Cannot delete from empty list
    }

    if (HeadPointer->ArtistName == TargetArtistName)
    {
        Song* NodeToDelete = HeadPointer;
        // Store current head for deletion

        HeadPointer = HeadPointer->NextNode;
        // Move head to next node

        delete NodeToDelete;
        // Delete old head node

        return true;
    }

    Song* CurrentPointer = HeadPointer;
    // Pointer used to find matching artist

    while (CurrentPointer->NextNode != NULL &&
           CurrentPointer->NextNode->ArtistName != TargetArtistName)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move until matching artist is found or end is reached
    }

    if (CurrentPointer->NextNode == NULL)
    {
        return false;
        // Artist not found
    }

    Song* NodeToDelete = CurrentPointer->NextNode;
    // Store matched node for deletion

    CurrentPointer->NextNode = NodeToDelete->NextNode;
    // Skip over the deleted node

    delete NodeToDelete;
    // Delete matched node

    return true;
}



// ==========================================================
// CATEGORY: Function - Delete By Song Number
// Purpose : Delete the first matching song by song number
// ==========================================================

bool DeleteBySongNumber(Song*& HeadPointer, int TargetSongNumber)
{
    if (HeadPointer == NULL)
    {
        return false;
        // Cannot delete from empty list
    }

    if (HeadPointer->SongNumber == TargetSongNumber)
    {
        Song* NodeToDelete = HeadPointer;
        // Store current head for deletion

        HeadPointer = HeadPointer->NextNode;
        // Move head to next node

        delete NodeToDelete;
        // Delete old head node

        return true;
    }

    Song* CurrentPointer = HeadPointer;
    // Pointer used to find matching song number

    while (CurrentPointer->NextNode != NULL &&
           CurrentPointer->NextNode->SongNumber != TargetSongNumber)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move until matching song number is found or end is reached
    }

    if (CurrentPointer->NextNode == NULL)
    {
        return false;
        // Song number not found
    }

    Song* NodeToDelete = CurrentPointer->NextNode;
    // Store matched node for deletion

    CurrentPointer->NextNode = NodeToDelete->NextNode;
    // Skip over deleted node

    delete NodeToDelete;
    // Delete matched node

    return true;
}



// ==========================================================
// CATEGORY: Function - Search By Genre
// Purpose : Search and display all songs matching a genre
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
    // Flag used to track whether at least one song is found

    cout << "\n[Search Result for Genre: " << TargetGenre << "]\n";
    cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
    cout << "| No | Artist               | Song                         | Released | Genre      | Length |\n";
    cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
    // Print table header

    while (HeadPointer != NULL)
    {
        if (HeadPointer->SongGenre == TargetGenre)
        {
            cout << "| " << setw(2) << left << HeadPointer->SongNumber << " ";
            cout << "| " << setw(20) << left << HeadPointer->ArtistName;
            cout << "| " << setw(28) << left << HeadPointer->SongTitle;
            cout << "| " << setw(9) << left << HeadPointer->ReleasedYear;
            cout << "| " << setw(11) << left << HeadPointer->SongGenre;
            cout << "| " << setw(6) << fixed << setprecision(2)
                 << HeadPointer->SongLength << " |\n";
            cout << "+----+----------------------+------------------------------+----------+------------+--------+\n";
            // Display matched song row

            IsSongFound = true;
            // Mark that a matching song exists
        }

        HeadPointer = HeadPointer->NextNode;
        // Move to the next node
    }

    if (!IsSongFound)
    {
        cout << "No songs found for this genre.\n\n";
        // Display message if no match is found
    }
    else
    {
        cout << endl;
        // Print blank line after matched results
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
    cout << "Enter No: ";
    cin >> SongNumberValue;
    // Read song number

    cin.ignore();
    // Clear leftover newline

    cout << "Enter Artist: ";
    getline(cin, ArtistNameValue);
    // Read full artist name

    cout << "Enter Song Title: ";
    getline(cin, SongTitleValue);
    // Read full song title

    cout << "Enter Released Year: ";
    cin >> ReleasedYearValue;
    // Read released year

    cin.ignore();
    // Clear leftover newline

    cout << "Enter Genre: ";
    getline(cin, SongGenreValue);
    // Read genre

    cout << "Enter Length (example 3.55): ";
    cin >> SongLengthValue;
    // Read song length

    cin.ignore();
    // Clear leftover newline
}



// ==========================================================
// CATEGORY: Function - Clear List
// Purpose : Delete all remaining nodes in the linked list
// ==========================================================

void ClearList(Song*& HeadPointer)
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
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    Song* HeadPointer = NULL;
    // Linked list starts empty

    InsertEnd(HeadPointer, 1, "Celine Dion", "Just Walk Away", 1993, "Pop", 4.58);
    // Insert first default song

    InsertEnd(HeadPointer, 2, "Taylor Swift", "You Belong With Me", 2008, "Pop", 3.48);
    // Insert second default song

    InsertEnd(HeadPointer, 3, "The Cranberries", "Promises", 1999, "Rock", 4.30);
    // Insert third default song

    int UserChoice;
    // Variable storing menu choice

    do
    {
        cout << "===== SIMPLE MUSIC PLAYER (LINKED LIST) =====\n";
        cout << "1. Insert song at beginning (front)\n";
        cout << "2. Insert song at end (back)\n";
        cout << "3. View song list (no sorting)\n";
        cout << "4. View song list sorted by song number\n";
        cout << "5. Delete song from beginning\n";
        cout << "6. Delete song from end\n";
        cout << "7. Delete song by artist name\n";
        cout << "8. Delete song by song number\n";
        cout << "9. Search song by genre\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        // Display menu

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
            // Variables used to store input

            cout << "\n[Insert at FRONT]\n";

            InputSong(SongNumberValue,
                      ArtistNameValue,
                      SongTitleValue,
                      ReleasedYearValue,
                      SongGenreValue,
                      SongLengthValue);
            // Read one song

            InsertFront(HeadPointer,
                        SongNumberValue,
                        ArtistNameValue,
                        SongTitleValue,
                        ReleasedYearValue,
                        SongGenreValue,
                        SongLengthValue);
            // Insert at front

            cout << "Inserted at front!\n\n";
        }
        else if (UserChoice == 2)
        {
            int SongNumberValue;
            int ReleasedYearValue;
            string ArtistNameValue;
            string SongTitleValue;
            string SongGenreValue;
            double SongLengthValue;
            // Variables used to store input

            cout << "\n[Insert at END]\n";

            InputSong(SongNumberValue,
                      ArtistNameValue,
                      SongTitleValue,
                      ReleasedYearValue,
                      SongGenreValue,
                      SongLengthValue);
            // Read one song

            InsertEnd(HeadPointer,
                      SongNumberValue,
                      ArtistNameValue,
                      SongTitleValue,
                      ReleasedYearValue,
                      SongGenreValue,
                      SongLengthValue);
            // Insert at end

            cout << "Inserted at end!\n\n";
        }
        else if (UserChoice == 3)
        {
            cout << "\n[Current Song List]\n";
            DisplayList(HeadPointer);
            // Display current list
        }
        else if (UserChoice == 4)
        {
            DisplaySortedBySongNumber(HeadPointer);
            // Display temporary sorted list
        }
        else if (UserChoice == 5)
        {
            cout << "\n[Delete from FRONT]\n";

            if (DeleteFront(HeadPointer))
            {
                cout << "First song deleted successfully.\n\n";
            }
            else
            {
                cout << "Cannot delete. Song list is empty.\n\n";
            }
        }
        else if (UserChoice == 6)
        {
            cout << "\n[Delete from END]\n";

            if (DeleteEnd(HeadPointer))
            {
                cout << "Last song deleted successfully.\n\n";
            }
            else
            {
                cout << "Cannot delete. Song list is empty.\n\n";
            }
        }
        else if (UserChoice == 7)
        {
            string TargetArtistName;
            // Variable storing artist name to delete

            cout << "\n[Delete by Artist Name]\n";
            cout << "Enter artist name to delete: ";
            getline(cin, TargetArtistName);
            // Read artist name

            if (DeleteByArtist(HeadPointer, TargetArtistName))
            {
                cout << "Song by artist \"" << TargetArtistName
                     << "\" deleted successfully.\n\n";
            }
            else
            {
                cout << "Artist not found.\n\n";
            }
        }
        else if (UserChoice == 8)
        {
            int TargetSongNumber;
            // Variable storing song number to delete

            cout << "\n[Delete by Song Number]\n";
            cout << "Enter song number to delete: ";
            cin >> TargetSongNumber;
            // Read song number

            cin.ignore();
            // Clear leftover newline

            if (DeleteBySongNumber(HeadPointer, TargetSongNumber))
            {
                cout << "Song number " << TargetSongNumber
                     << " deleted successfully.\n\n";
            }
            else
            {
                cout << "Song number not found.\n\n";
            }
        }
        else if (UserChoice == 9)
        {
            string TargetGenre;
            // Variable storing genre to search

            cout << "\n[Search by Genre]\n";
            cout << "Enter genre to search: ";
            getline(cin, TargetGenre);
            // Read genre

            SearchByGenre(HeadPointer, TargetGenre);
            // Display songs matching the genre
        }
        else if (UserChoice == 0)
        {
            cout << "Bye!\n";
            // Exit message
        }
        else
        {
            cout << "Invalid choice. Try again.\n\n";
            // Handle invalid input
        }

    } while (UserChoice != 0);
    // Repeat until user chooses 0

    ClearList(HeadPointer);
    // Free all remaining nodes before program ends

    return 0;
}
