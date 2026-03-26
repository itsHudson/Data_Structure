# Complete Binary Tree and Full Binary Tree
  - For each binary tree below, determine whether it is:
    - a **Complete Binary Tree**
    - a **Full Binary Tree**
    
<style>
  .resized-image {
    width: 600px;
    height: auto;
  }
</style>
<img src="https://github.com/itsHudson/Data_Structure/blob/main/Practice/Lesson_0011%20-%20Binary%20Tree/Question%20008/008.png" class="resized-image" alt="image">

---

## Tree 1
- **Complete Binary Tree:** No  
- **Full Binary Tree:** No  

### Reason
- It is **not full** because node 3 has only one child.  
- It is **not complete** because node 3 has a right child without a left child.  

---

## Tree 2
- **Complete Binary Tree:** No  
- **Full Binary Tree:** Yes  

### Reason
- It is **full** because every parent has either 0 or 2 children.  
- It is **not complete** because the last level is not filled from left to right.  

---

## Tree 3
- **Complete Binary Tree:** Yes  
- **Full Binary Tree:** No  

### Reason
- It is **complete** because the last level nodes are filled from left to right.  
- It is **not full** because node 2 has only one child.  

---

## Tree 4
- **Complete Binary Tree:** Yes  
- **Full Binary Tree:** Yes  

### Reason
- It is **complete** because all levels are properly filled from left to right.  
- It is **full** because every parent has either 0 or 2 children.  

---

## Final Correct Answer Summary

| Tree   | Complete Binary Tree | Full Binary Tree |
|--------|---------------------|------------------|
| Tree 1 | No                  | No               |
| Tree 2 | No                  | Yes              |
| Tree 3 | Yes                 | No               |
| Tree 4 | Yes                 | Yes              |
