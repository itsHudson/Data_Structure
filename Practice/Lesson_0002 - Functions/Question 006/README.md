# Write a program that will determine whether a student is eligible to accompany her lecturer to do some shopping.
- There are certain conditions:
    - Must be a legal earth dweller and 
    - Score at least 50 marks in the quiz, or Handsome/beautiful
    - Score at least 25% marks in the quiz


- Condition Set and Requirement:
  - A: Must be legal earth dweller AND quiz score ≥ 50
  - B: Must be handsome/beautiful AND quiz score ≥ 25
  - Final Decision: Eligible if A OR B
 

```text
✅ Case 1 (Both yes, high score)
  Are you a legal earth dweller? (y/n): y
  Are you handsome/beautiful? (y/n): y
  Enter your quiz score (0 - 100): 80

  You are eligible to accompany the lecturer shopping! 🎉


✅ Case 2 (Earth dweller + sufficient score)
  Are you a legal earth dweller? (y/n): y
  Are you handsome/beautiful? (y/n): n
  Enter your quiz score (0 - 100): 55

  You are eligible to accompany the lecturer shopping! 🎉


✅ Case 3 (Attractive + enough score)
  Are you a legal earth dweller? (y/n): n
  Are you handsome/beautiful? (y/n): y
  Enter your quiz score (0 - 100): 30

  You are eligible to accompany the lecturer shopping! 🎉


❌ Case 4 (Both yes but low score)
  Are you a legal earth dweller? (y/n): y
  Are you handsome/beautiful? (y/n): y
  Enter your quiz score (0 - 100): 20

  Sorry, you are NOT eligible.


❌ Case 5 (Not earth dweller, not attractive)
  Are you a legal earth dweller? (y/n): n
  Are you handsome/beautiful? (y/n): n
  Enter your quiz score (0 - 100): 70

  Sorry, you are NOT eligible.


❌ Case 6 (Attractive but score too low)
  Are you a legal earth dweller? (y/n): n
  Are you handsome/beautiful? (y/n): y
  Enter your quiz score (0 - 100): 20

  Sorry, you are NOT eligible.
