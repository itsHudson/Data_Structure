# Using the program that you wrote in question 4, write an insert function that will insert a new student at the front of the linked list. Then, write a display function to display the values in the linked list.  

# Example Output
```
1003 -> 1002 -> 1001 -> NULL
```

# Insertion at Front in Linked List
```
When inserting: InsertFront(head, 1001)
Memory: head → [1001 | NULL]

Insert again: InsertFront(head, 1002)
Memory: head → [1002] → [1001] → NULL

Insert again: InsertFront(head, 1003)
Memory: head → [1003] → [1002] → [1001] → NULL


Traversal Process
- The display function walks through nodes: HeadPointer → Node1 → Node2 → Node3 → NULL
