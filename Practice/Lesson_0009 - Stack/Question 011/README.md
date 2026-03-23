# Coin Stack Using Arrays and Linked Lists: Question and Answer

## Question:
Below is the sequence in which Ali removes coins from the coin pile and stacks the coins vertically:

[50 cent, 20 cent, 10 cent, 10 cent, 20 cent, 50 cent, 50 cent, 20 cent, 10 cent, 20 cent, 20 cent]

John then removes three (3) coins from the vertical stack of coins that Ali has constructed. At the same time, John will add another one (1) 50 cent and two (2) 10 cents back to the stack, where the 50 cents will be added first before the 10 cents.

Finally, the coins in the vertical stack are displayed from top to bottom.

Use arrays and linked lists respectively to implement coin stacks.

## Answer:

This question is about implementing a **stack**, because coins are added and removed using the **Last In, First Out (LIFO)** concept.

- Ali pushes all coins into the stack in the given order.
- John pops 3 coins from the stack.
- Then John pushes:
  - one 50 cent
  - one 10 cent
  - one 10 cent
- Finally, the stack is displayed from **top to bottom**.

---

## Step 1: Build the Original Stack

Ali inserts the coins in this order:

50, 20, 10, 10, 20, 50, 50, 20, 10, 20, 20

After all pushes, the **top of stack** is the last inserted coin.

So the stack from **top to bottom** becomes:

20, 20, 10, 20, 50, 50, 20, 10, 10, 20, 50

---

## Step 2: John Removes 3 Coins

John removes the top 3 coins:

- remove 20
- remove 20
- remove 10

Remaining stack from top to bottom:

20, 50, 50, 20, 10, 10, 20, 50

---

## Step 3: John Adds New Coins

John adds:
- 50 first
- 10
- 10

After pushing these new coins, the final stack from **top to bottom** becomes:

10, 10, 50, 20, 50, 50, 20, 10, 10, 20, 50

---

## Final Output from Top to Bottom:
```text
Coins from top to bottom:
10 cent, 10 cent, 50 cent, 20 cent, 50 cent, 50 cent, 20 cent, 10 cent, 10 cent, 20 cent, 50 cent
```

---



## Explanation: Why Stack is Used
- A stack follows the LIFO rule: The last coin inserted will be the first coin removed.

- Array Implementation
  - Uses an array to store the stack values.
  - topIndex keeps track of the current top position.
  - Easy and simple for fixed-size stacks.

- Linked List Implementation
  - Uses nodes connected by pointers.
  - The top node represents the top of the stack.
  - More flexible because it can grow dynamically.
