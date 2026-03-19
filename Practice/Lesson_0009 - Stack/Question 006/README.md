# Write a program that reads in a sequence of characters, and determines whether its parentheses, braces, and curly braces are "balanced."  Hint: for left delimiters, push onto the stack; for right delimiters, pop from the stack and check whether the popped element matches the right delimiter. Implements using an array. 

```text
Enter your expression here: ((a+b)+{c-d})
The parentheses of the expression are balanced.


Enter your expression here: ((a+b)+{c-d]
The parentheses of the expression are not balanced.
```


# Explanation
  - This program uses an array-based stack to check whether parentheses, braces, and brackets are balanced.
  - Every left delimiter is pushed into the stack.
  - When a right delimiter is found, the program pops the top item and checks whether both symbols match correctly.
  - If all delimiters match and the stack is empty at the end, the expression is balanced.
