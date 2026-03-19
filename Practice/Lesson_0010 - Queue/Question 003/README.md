# Palindrome 
 - Write a program that reads a line of text, changes all letters to lowercase, and places each letter both in a queue and onto a stack.
 - The program should then verify whether the line of text is a palindrome (a set of letters or numbers that is the same whether read forward or backward). 

```text
Processed text: madam
The line of text is a palindrome.


Processed text: racecar
The line of text is a palindrome.


Processed text: hello
The line of text is not a palindrome.
```


# Explanation
 - This program reads a line of text and converts all letters to lowercase.
 - Each valid character is inserted into both a queue and a stack.
 - The queue stores the characters in the original order, while the stack stores them in reverse order because it follows the Last In First Out (LIFO) principle.
 - The program then compares the characters removed from the queue and stack one by one.
 - If all characters match, the text is a palindrome; otherwise, it is not a palindrome.
  
 - Queue → normal order
 - Stack → reverse order
 - if both match → palindrome
