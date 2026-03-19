// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries
// ==========================================================

#include <iostream>
using namespace std;


// ==========================================================
// CATEGORY: Global Tower Storage
// Purpose : Represent the three towers using arrays
// ==========================================================

int Tower1[10];
int Tower2[10];
int Tower3[10];

int Tower1Size = 0;
int Tower2Size = 0;
int Tower3Size = 0;


// ==========================================================
// CATEGORY: Display Function
// Purpose : Print current tower status
// ==========================================================

void DisplayTowers()
{
    cout << "Tower-1-> ";
    for(int Index = 0; Index < Tower1Size; Index++)
        cout << Tower1[Index] << " ";
    cout << endl;

    cout << "Tower-2-> ";
    for(int Index = 0; Index < Tower2Size; Index++)
        cout << Tower2[Index] << " ";
    cout << endl;

    cout << "Tower-3-> ";
    for(int Index = 0; Index < Tower3Size; Index++)
        cout << Tower3[Index] << " ";
    cout << endl << endl;
}


// ==========================================================
// CATEGORY: Push Disk
// Purpose : Add disk to a tower
// ==========================================================

void PushDisk(int TowerNumber, int DiskValue)
{
    if(TowerNumber == 1)
        Tower1[Tower1Size++] = DiskValue;

    else if(TowerNumber == 2)
        Tower2[Tower2Size++] = DiskValue;

    else if(TowerNumber == 3)
        Tower3[Tower3Size++] = DiskValue;
}


// ==========================================================
// CATEGORY: Pop Disk
// Purpose : Remove disk from a tower
// ==========================================================

int PopDisk(int TowerNumber)
{
    if(TowerNumber == 1)
        return Tower1[--Tower1Size];

    else if(TowerNumber == 2)
        return Tower2[--Tower2Size];

    else
        return Tower3[--Tower3Size];
}


// ==========================================================
// CATEGORY: Move Disk
// Purpose : Move disk between towers
// ==========================================================

void MoveDisk(int FromTower, int ToTower)
{
    int Disk = PopDisk(FromTower);
    PushDisk(ToTower, Disk);

    DisplayTowers();
}


// ==========================================================
// CATEGORY: Tower of Hanoi Recursive Function
// Purpose : Solve Hanoi puzzle
// ==========================================================

void SolveHanoi(int NumberOfDisks, int SourceTower, int HelperTower, int DestinationTower)
{
    if(NumberOfDisks == 1)
    {
        MoveDisk(SourceTower, DestinationTower);
        return;
    }

    SolveHanoi(NumberOfDisks - 1, SourceTower, DestinationTower, HelperTower);

    MoveDisk(SourceTower, DestinationTower);

    SolveHanoi(NumberOfDisks - 1, HelperTower, SourceTower, DestinationTower);
}


// ==========================================================
// CATEGORY: Main Function
// ==========================================================

int main()
{
    int NumberOfDisks;

    cout << "Enter the number of disks : ";
    cin >> NumberOfDisks;

    // Initialize Tower-1 with disks
    for(int Disk = NumberOfDisks; Disk >= 1; Disk--)
    {
        PushDisk(1, Disk);
    }

    cout << endl;
    DisplayTowers();

    SolveHanoi(NumberOfDisks, 1, 2, 3);

    return 0;
}
