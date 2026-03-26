# Binary Search Tree Construction and Analysis
  - Create a **Binary Search Tree (BST)** using the following data (insert in given order): Guava, Banana, Apple, Watermelon, Mango, Orange, Grape, Strawberry, Pineapple

  - Then answer:
    1. What is the length of the path from **Banana → Pineapple**?  
    2. What is the **height** of the tree?  
    3. What is the **degree of node Orange**?  
    4. What is the **degree of the tree**?  
    5. Write the **Pre-order, In-order, Post-order, and Level-order traversal**  

---

# Step 1: Construct Binary Search Tree
- For a BST:
  - smaller word goes to the left
  - bigger word goes to the right

```text
            Guava
           /     \
      Banana     Watermelon
      /    \        /
  Apple   Grape   Mango
                      \
                      Orange
                         \
                      Strawberry
                       /
                 Pineapple
```

---

# Answer

## 1. Length of Path (Banana → Pineapple)

### Path:
Banana → Guava → Watermelon → Mango → Orange → Strawberry → Pineapple  

- Total edges = **6**

**Answer: 6**

---

## 2. Height of the Tree

### Longest Path:
Guava → Watermelon → Mango → Orange → Strawberry → Pineapple  

- Total edges = **5**

**Answer: 5**

---

## 3. Degree of Node Orange

- Orange has **1 child (Strawberry)**  

**Answer: 1**

---

## 4. Degree of the Tree

- Maximum number of children any node has = **2**

**Answer: 2**

---

## 5. Tree Traversals

### Pre-order (Root → Left → Right)
Guava → Banana → Apple → Grape → Watermelon → Mango → Orange → Strawberry → Pineapple  

---

### In-order (Left → Root → Right)
Apple → Banana → Grape → Guava → Mango → Orange → Pineapple → Strawberry → Watermelon  

---

### Post-order (Left → Right → Root)
Apple → Grape → Banana → Pineapple → Strawberry → Orange → Mango → Watermelon → Guava  

---

### Level-order (Level by Level)
Guava → Banana → Watermelon → Apple → Grape → Mango → Orange → Strawberry → Pineapple  

---
