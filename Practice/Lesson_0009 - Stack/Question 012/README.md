# Question 1: Provide one example of an application using a stack.

## Answer:
   - One common application of a stack is **expression evaluation and conversion**, such as converting an **infix expression to postfix expression**.
   - Stacks are used to temporarily store operators and ensure the correct order of operations based on precedence.

---

# Question 2: Briefly describe the algorithm of the above application in question 1.

## Answer:

### Algorithm for Infix to Postfix Conversion:
1. Initialize an empty stack and an empty output string.
2. Scan the infix expression from left to right.
3. If the character is an operand (A–Z or number):
   - Add it directly to the output.
4. If the character is an operator (+, -, *, /):
   - While the stack is not empty and the operator at the top of the stack has higher or equal precedence:
     - Pop from stack and add to output.
   - Push the current operator into the stack.
5. If the character is '(':
   - Push it onto the stack.
6. If the character is ')':
   - Pop from the stack and add to output until '(' is found.
   - Remove '(' from the stack.
7. After scanning the entire expression:
   - Pop all remaining operators from the stack and add to output.

---

## Summary:
- Stack application → Expression conversion (Infix → Postfix)
- Stack ensures correct operator precedence
- Uses push and pop operations to manage operators
