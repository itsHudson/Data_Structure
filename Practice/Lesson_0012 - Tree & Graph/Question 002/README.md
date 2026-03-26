# Binary Search Tree Construction
  - Create a **Binary Search Tree (BST)** using the following data (insert in given order): 77, 44, 11, 88, 80, 79, 100

---

## Step 1: Construct Binary Search Tree
```text
        77
       /   \
     44     88
    /      /  \
  11      80  100
          /
        79
```


---

# Answer

## Explanation (Insertion Order)

- 77 → Root  
- 44 < 77 → go left  
- 11 < 44 → go left  
- 88 > 77 → go right  
- 80 < 88 → go left  
- 79 < 80 → go left  
- 100 > 88 → go right  

---

## Final BST Structure

- Root: **77**
- Left Subtree: **44 → 11**
- Right Subtree: **88 → (80 → 79, 100)**

---
