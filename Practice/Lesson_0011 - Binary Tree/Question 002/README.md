# After completing Question 1, answer the questions below. 

# Tree Analysis Questions

## (a) What is the length of the path from Monkey → Panda?

### Path
- Monkey → Rat → Panda

### Calculation
- Number of edges in this path = **2**

### Answer
**2**

---

# (b) What is the height of the tree given?

### Longest Path from Root to Leaf
Possible longest paths:

- Monkey → Rat → Tiger → Salmon  
- Monkey → Rat → Tiger → Zebra  

### Calculation
- Number of edges in the path = **3**

### Answer
**3**

### Note
- If height is measured by **levels instead of edges**, the height would be **4 levels**.
- In **Data Structures**, height is usually counted using **edges**, so **3 is the correct answer**.

---

# (c) What is the degree of node Rat?

### Children of Node Rat
- Left child: **Panda**
- Right child: **Tiger**

### Degree of Node Rat
- Number of children = **2**

### Answer
**2**

---

# (d) What is the degree of the tree given?

### Definition
- The **degree of a tree** is the **maximum degree of any node** in the tree.

### Nodes with Two Children
- Monkey
- Dog
- Rat
- Tiger

### Maximum Degree
- Maximum number of children for any node = **2**

### Answer
**2**

---

# (e) Write the Preorder, Inorder, Postorder, and Level Order Traversals

## Tree Structure (Reference)
```
                Monkey
               /      \
            Dog        Rat
           /   \      /   \
        Cat  Elephant Panda Tiger
                             /   \
                        Salmon   Zebra
```


---

# 1. Preorder Traversal

### Rule
- Root → Left → Right

### Result
- Monkey, Dog, Cat, Elephant, Rat, Panda, Tiger, Salmon, Zebra

---

# 2. Inorder Traversal

### Rule
- Left → Root → Right

### Result
- Cat, Dog, Elephant, Monkey, Panda, Rat, Salmon, Tiger, Zebra

---

# 3. Postorder Traversal

### Rule
- Left → Right → Root

### Result
- Cat, Elephant, Dog, Panda, Salmon, Zebra, Tiger, Rat, Monkey

---

# 4. Level Order Traversal

### Rule
- Traverse level by level from **top to bottom** and **left to right**

### Result
- Monkey, Dog, Rat, Cat, Elephant, Panda, Tiger, Salmon, Zebra
