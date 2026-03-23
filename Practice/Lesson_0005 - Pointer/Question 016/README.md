# Question 1: Explain the differences between static and dynamic allocation in memory.

## Answer:
```text
- Static memory allocation is done at compile time.
  - The size of memory is fixed and cannot be changed during program execution.
  - It is faster and automatically managed by the compiler.
  - Example: normal variables and arrays.

- Dynamic memory allocation is done at runtime using operators like `new` and `delete`.
  - The size of memory can be changed during execution.
  - It provides flexibility but requires manual memory management by the programmer.
```


---


# Question 2: Implement `void swap(int*, int*)` function.

## Answer:
```cpp
#include <iostream>
using namespace std;

void SwapValues(int* firstNumberPointer, int* secondNumberPointer)
{
    int temporaryValue = *firstNumberPointer;
    *firstNumberPointer = *secondNumberPointer;
    *secondNumberPointer = temporaryValue;
}

int main()
{
    int firstNumber = 10;
    int secondNumber = 20;

    cout << "Before swap: " << firstNumber << " " << secondNumber << endl;

    SwapValues(&firstNumber, &secondNumber);

    cout << "After swap: " << firstNumber << " " << secondNumber << endl;

    return 0;
}
```


---


# Question 3: Write and run the "Pass by Reference (Using Reference Variable)" examples.
## Output:
```text
Original value: 5
New value: 125
```

## Answer:
```cpp
// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input/output operations
// ==========================================================

#include <iostream>
// Provides cout for output

using namespace std;
// Avoid std:: prefix



// ==========================================================
// CATEGORY: Function - Pass by Reference
// Purpose : Modify original variable using reference
// ==========================================================

void CubeByReference(int& numberReference)
{
    // numberReference is an alias (another name) for the original variable

    numberReference = numberReference * numberReference * numberReference;
    // Directly modifies the original value (cube calculation)
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{
    int number = 5;
    // Declare and initialize variable

    cout << "Original value: " << number << endl;
    // Display original value

    CubeByReference(number);
    // Pass variable directly (reference is used automatically)

    cout << "New value: " << number << endl;
    // Value is changed → 5³ = 125

    return 0;
    // End program
}
```
