// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries for input/output and timing
// ==========================================================

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;


// ==========================================================
// FUNCTION PROTOTYPES
// ==========================================================

void print_array(int array[], int size);
void bubble_sort(int array[], int size);
void insertion_sort(int array[], int size);



// ==========================================================
// MAIN FUNCTION
// ==========================================================

int main() {

    int billy[] = {4, 2, 1, 3, 5};
    int size = sizeof(billy) / sizeof(billy[0]);

    int bubbleArray[5];
    int insertionArray[5];


    // ======================================================
    // Copy original array so both algorithms start equally
    // ======================================================

    for(int i = 0; i < size; i++){
        bubbleArray[i] = billy[i];
        insertionArray[i] = billy[i];
    }


    // ======================================================
    // BUBBLE SORT SECTION
    // ======================================================

    cout << "Original Array: ";
    print_array(billy, size);

    auto start = high_resolution_clock::now();

    bubble_sort(bubbleArray, size);

    auto end = high_resolution_clock::now();

    auto durationBubble = duration_cast<microseconds>(end - start);

    cout << "\nBubble Sort Result: ";
    print_array(bubbleArray, size);

    cout << "Bubble Sort Execution Time: "
         << durationBubble.count()
         << " microseconds\n";


    // ======================================================
    // INSERTION SORT SECTION
    // ======================================================

    start = high_resolution_clock::now();

    insertion_sort(insertionArray, size);

    end = high_resolution_clock::now();

    auto durationInsertion = duration_cast<microseconds>(end - start);

    cout << "\nInsertion Sort Result: ";
    print_array(insertionArray, size);

    cout << "Insertion Sort Execution Time: "
         << durationInsertion.count()
         << " microseconds\n";


    return 0;
}



// ==========================================================
// FUNCTION: PRINT ARRAY
// Purpose : Display array elements
// ==========================================================

void print_array(int array[], int size){

    for(int i = 0; i < size; i++){

        cout << array[i];

        if(i < size - 1)
            cout << ", ";
    }

    cout << endl;
}



// ==========================================================
// FUNCTION: BUBBLE SORT
// ==========================================================

void bubble_sort(int array[], int size){

    int temp;

    for(int iteration = 0; iteration < size - 1; iteration++){

        for(int i = 0; i < size - 1 - iteration; i++){

            if(array[i] > array[i+1]){

                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;

            }
        }
    }
}



// ==========================================================
// FUNCTION: INSERTION SORT
// ==========================================================

void insertion_sort(int array[], int size){

    int i, temp;

    for(int unsorted = 1; unsorted < size; unsorted++){

        i = unsorted;

        while(i > 0 && array[i-1] > array[i]){

            temp = array[i];
            array[i] = array[i-1];
            array[i-1] = temp;

            i--;
        }
    }
}
