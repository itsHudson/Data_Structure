# Tower of Hanoi

The **Tower of Hanoi** (also called the **Tower of Brahma** or **Lucas’ Tower**) is a mathematical puzzle or game.

The puzzle consists of **three rods** and a number of **disks of different sizes** which can slide onto any rod.

The objective of the puzzle is to **move the entire stack of disks from one rod to another rod** while following several rules.

---

## Rules of the Puzzle

- Only **one disk can be moved at a time**.
- Each move consists of taking the **top disk from one stack** and placing it **on top of another stack**.
- A disk can **only be moved if it is the uppermost disk** of a stack.
- **No larger disk may be placed on top of a smaller disk**.

---

# Sample Movement (Example with 3 Disks)

## Initial State

- Tower A: 3, 2, 1
- Tower B: empty
- Tower C: empty

---

## Step 1

- Move disk **1** from **Tower A → Tower C**

- Tower A: 3, 2  
- Tower B: empty  
- Tower C: 1  

---

## Step 2

- Move disk **2** from **Tower A → Tower B**

- Tower A: 3  
- Tower B: 2  
- Tower C: 1  

---

## Step 3

- Move disk **1** from **Tower C → Tower B**

- Tower A: 3  
- Tower B: 2, 1  
- Tower C: empty  

---

## Step 4

- Move disk **3** from **Tower A → Tower C**

- Tower A: empty  
- Tower B: 2, 1  
- Tower C: 3  

---

## Step 5

- Move disk **1** from **Tower B → Tower A**

- Tower A: 1  
- Tower B: 2  
- Tower C: 3  

---

## Step 6

- Move disk **2** from **Tower B → Tower C**

- Tower A: 1  
- Tower B: empty  
- Tower C: 3, 2  

---

## Step 7

- Move disk **1** from **Tower A → Tower C**

- Tower A: empty  
- Tower B: empty  
- Tower C: 3, 2, 1  

---

## Final Result

- Tower A: empty  
- Tower B: empty  
- Tower C: 3, 2, 1  

All disks have been successfully moved from **Tower A to Tower C** following the rules of the Tower of Hanoi.



---


# Sample Output (Input = 3)
```
Enter the number of disks : 3

Tower-1-> 3 2 1
Tower-2->
Tower-3->

Tower-1-> 3 2
Tower-2->
Tower-3-> 1

Tower-1-> 3
Tower-2-> 2
Tower-3-> 1

Tower-1-> 3
Tower-2-> 2 1
Tower-3->

Tower-1->
Tower-2-> 2 1
Tower-3-> 3

Tower-1-> 1
Tower-2-> 2
Tower-3-> 3

Tower-1-> 1
Tower-2->
Tower-3-> 3 2

Tower-1->
Tower-2->
Tower-3-> 3 2 1
