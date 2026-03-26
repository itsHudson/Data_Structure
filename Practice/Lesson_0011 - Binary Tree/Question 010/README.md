# Binary Tree Concepts

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

### Formula:
