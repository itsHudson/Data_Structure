// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries
// ==========================================================

#include <iostream>   // Provides input and output functionality
using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Global Tower Storage
// Purpose : Represent the three towers using arrays
// ==========================================================

int Tower1[10];   // Array representing Tower-1 disks
int Tower2[10];   // Array representing Tower-2 disks
int Tower3[10];   // Array representing Tower-3 disks

int Tower1DiskCount = 0;   // Current number of disks in Tower-1
int Tower2DiskCount = 0;   // Current number of disks in Tower-2
int Tower3DiskCount = 0;   // Current number of disks in Tower-3


// ==========================================================
// CATEGORY: Display Function
// Purpose : Print current tower status
// ==========================================================

void DisplayTowers()
{
    cout << "Tower-1-> ";
    // Print disks stored in Tower-1

    for(int DiskIndex = 0; DiskIndex < Tower1DiskCount; DiskIndex++)
        cout << Tower1[DiskIndex] << " ";
        // Display each disk in Tower-1

    cout << endl;

    cout << "Tower-2-> ";
    // Print disks stored in Tower-2

    for(int DiskIndex = 0; DiskIndex < Tower2DiskCount; DiskIndex++)
        cout << Tower2[DiskIndex] << " ";
        // Display each disk in Tower-2

    cout << endl;

    cout << "Tower-3-> ";
    // Print disks stored in Tower-3

    for(int DiskIndex = 0; DiskIndex < Tower3DiskCount; DiskIndex++)
        cout << Tower3[DiskIndex] << " ";
        // Display each disk in Tower-3

    cout << endl << endl;
}


// ==========================================================
// CATEGORY: Push Disk
// Purpose : Add disk to a tower
// ==========================================================

void PushDisk(int TargetTowerNumber, int DiskValue)
{
    if(TargetTowerNumber == 1)
        Tower1[Tower1DiskCount++] = DiskValue;
        // Insert disk into Tower-1 and increase disk count

    else if(TargetTowerNumber == 2)
        Tower2[Tower2DiskCount++] = DiskValue;
        // Insert disk into Tower-2 and increase disk count

    else if(TargetTowerNumber == 3)
        Tower3[Tower3DiskCount++] = DiskValue;
        // Insert disk into Tower-3 and increase disk count
}


// ==========================================================
// CATEGORY: Pop Disk
// Purpose : Remove disk from a tower
// ==========================================================

int PopDisk(int TargetTowerNumber)
{
    if(TargetTowerNumber == 1)
        return Tower1[--Tower1DiskCount];
        // Remove and return the top disk from Tower-1

    else if(TargetTowerNumber == 2)
        return Tower2[--Tower2DiskCount];
        // Remove and return the top disk from Tower-2

    else
        return Tower3[--Tower3DiskCount];
        // Remove and return the top disk from Tower-3
}


// ==========================================================
// CATEGORY: Move Disk
// Purpose : Move disk between towers
// ==========================================================

void MoveDisk(int SourceTowerNumber, int DestinationTowerNumber)
{
    int DiskValue = PopDisk(SourceTowerNumber);
    // Remove disk from source tower

    PushDisk(DestinationTowerNumber, DiskValue);
    // Push disk onto destination tower

    DisplayTowers();
    // Display current tower configuration
}


// ==========================================================
// CATEGORY: Tower of Hanoi Recursive Function
// Purpose : Solve Hanoi puzzle using recursion
// ==========================================================

void SolveHanoi(int NumberOfDisks, int SourceTower, int HelperTower, int DestinationTower)
{
    if(NumberOfDisks == 1)
    {
        MoveDisk(SourceTower, DestinationTower);
        // Move single disk directly

        return;
    }

    SolveHanoi(NumberOfDisks - 1, SourceTower, DestinationTower, HelperTower);
    // Move n-1 disks from source to helper

    MoveDisk(SourceTower, DestinationTower);
    // Move largest disk to destination

    SolveHanoi(NumberOfDisks - 1, HelperTower, SourceTower, DestinationTower);
    // Move n-1 disks from helper to destination
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    int NumberOfDisks;
    // Variable to store total number of disks

    cout << "Enter the number of disks : ";
    cin >> NumberOfDisks;
    // Read number of disks from user


    // ======================================================
    // CATEGORY: Initialize Tower-1
    // Purpose : Place disks into Tower-1 in descending order
    // ======================================================

    for(int DiskValue = NumberOfDisks; DiskValue >= 1; DiskValue--)
    {
        PushDisk(1, DiskValue);
        // Push disks into Tower-1 starting from largest
    }

    cout << endl;

    DisplayTowers();
    // Show initial tower configuration


    // ======================================================
    // CATEGORY: Solve Tower of Hanoi
    // ======================================================

    SolveHanoi(NumberOfDisks, 1, 2, 3);
    // Start recursive Hanoi solution


    return 0;
    // Program finished successfully
}
