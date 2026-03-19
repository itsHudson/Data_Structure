# Write a program that reads in a sequence of characters, and determines whether its parentheses, braces, and curly braces are "balanced."  Hint: for left delimiters, push onto the stack; for right delimiters, pop from the stack and check whether the popped element matches the right delimiter. Implements using a linked list.

```text
Enter your equation here: ((a+b))+(
The parenthesis of the equation is not balance. Thus equation is not correct in term of writing.



Enter your equation here: ((a+b))+((c+b))
The parenthesis of the equation is balance. Thus equation correct in term of writing.
```


# Simple logic for your understanding
 - If input is: ((a+b))+((c+b))

 - Process:
   ```
    ( → push
    
    ( → push
    
    ) → pop
    
    ) → pop
    
    ( → push
    
    ( → push
    
    ) → pop
    
    ) → pop
    
    At the end, stack is empty, so it is balanced.
   ```


# Explanation
- This program uses a linked-list stack to check whether the delimiters in an equation are balanced.
- Each left delimiter such as (, {, or [ is pushed into the stack.
- When a right delimiter such as ), }, or ] is found, the program pops the top element from the stack and checks whether both symbols match.
- If all delimiters match correctly and the stack is empty at the end, the equation is considered balanced.
- Otherwise, it is not balanced.
