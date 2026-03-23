# Question 1:
  - Explain the differences between static and dynamic allocation in memory.

  - Answer:
    ```
    - Static memory allocation is done at compile time.
      - The size of memory is fixed and cannot be changed during program execution.
      - It is faster and automatically managed by the compiler.
      - Example: normal variables and arrays.

    - Dynamic memory allocation is done at runtime using operators like `new` and `delete`.
      - The size of memory can be changed during execution.
      - It provides flexibility but requires manual memory management by the programmer.
    ```


---

## Question 2:
Implement `void swap(int*, int*)` function.

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
