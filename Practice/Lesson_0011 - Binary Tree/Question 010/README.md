# Binary Tree Concepts

## Question
1. In what scenarios would you use a binary tree instead of a doubly linked list?  
2. How would you convert a binary tree into a doubly linked list?  
3. Can you detail the steps to perform an in-order traversal in a binary tree?  
4. How would you determine the height of a binary tree?  
5. Can you explain preorder, inorder, and postorder tree traversal methods?  
6. In what instances would a tree data structure be more beneficial than a hash table?  

---

# Answer
## 1. When to use a Binary Tree instead of a Doubly Linked List
- When you need **fast searching** (O(log n) in balanced tree)
- When data must be **sorted automatically**
- When you need **hierarchical structure** (parent-child relationship)
- When performing **range queries** (e.g., values between A and B)

---

## 2. Convert Binary Tree to Doubly Linked List

### Idea: Use **In-order traversal**

### Steps:
1. Traverse left subtree
2. Connect current node with previous node
3. Traverse right subtree

### Key Concept:
- Left pointer → previous node  
- Right pointer → next node  

---

## 3. Steps for In-order Traversal

### Rule: Left → Root → Right

### Steps:
1. Go to left child
2. Visit current node
3. Go to right child
4. Repeat until all nodes visited

---

## 4. Determine Height of Binary Tree

### Formula: height = max(height_of_left_subtree, height_of_right_subtree) + 1


### Steps:
1. If node is NULL → height = 0
2. Recursively find left height
3. Recursively find right height
4. Take maximum + 1

---

## 5. Tree Traversal Methods

### Pre-order (Root → Left → Right)
- Visit root first
- Then left subtree
- Then right subtree

---

### In-order (Left → Root → Right)
- Visit left subtree
- Then root
- Then right subtree

---

### Post-order (Left → Right → Root)
- Visit left subtree
- Visit right subtree
- Visit root last

---

## 6. When Tree is better than Hash Table

- When data must be **sorted**
- When you need **range queries**
- When you need **ordered traversal**
- When you need **min/max quickly**
- When handling **hierarchical data**

### Hash Table is NOT good for:
- Ordered data
- Range queries
- Traversal in sequence

---
