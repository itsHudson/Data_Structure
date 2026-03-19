# Modify Question 6 to include two other data members – student name and student age into the Student structure. Modify the insert and display functions accordingly.

# Program Output
```
ID: 1001
Name: Ali
Age: 20
----------------------
ID: 1002
Name: Aina
Age: 21
----------------------
ID: 1003
Name: John
Age: 19
----------------------
```

# Memory Structure
```
HeadPointer
     │
     ▼
[1001, Ali, 20] → [1002, Aina, 21] → [1003, John, 19] → NULL
```

# Traversal Process
 - The display function walks through each node: HeadPointer → Node1 → Node2 → Node3 → NULL
