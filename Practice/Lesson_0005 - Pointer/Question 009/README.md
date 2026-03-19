# Write a program that grades the written portion of the driver’s license exam. The exam has 20 multiple-choice questions. Here are the correct answers: 
```
1.  B   6.  A   11. B   16. C
2.  D   7.  B   12. C   17. C
3.  A   8.  A   13. D   18. B
4.  A   9.  C   14. A   19. D
5.  C   10. D   15. D   20. A
```

- Your program should store the correct answers shown above in an array. 
- It should ask the user to enter the answers for each of the 20 questions, and the answers should be stored in another array. 
- After the student’s answers have been entered, the program should have a function to display a message indicating whether the student passed or failed the exam. 
- A student must correctly answer 15 of the 20 questions to pass the exam.
- Input validation: Only accept the letters A, B, C, or D as answers.

```text
Enter answers for 20 questions (A/B/C/D):
Question 1: A
Question 2: A
Question 3: A
Question 4: A
Question 5: A
Question 6: A
Question 7: A
Question 8: A
Question 9: A
Question 10: A
Question 11: B
Question 12: B
Question 13: B
Question 14: C
Question 15: C
Question 16: C
Question 17: D
Question 18: D
Question 19: D
Question 20: D

Total correct answers = 7
Result: FAILED
