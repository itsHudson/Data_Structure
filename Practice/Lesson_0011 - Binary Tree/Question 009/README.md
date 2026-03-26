# Tree Traversal
  - List the **Pre-order**, **In-order**, **Post-order**, and **Level-order** traversal of the following trees.

<style>
  .resized-image {
    width: 600px;
    height: auto;
  }
</style>
<img src="https://github.com/itsHudson/Data_Structure/blob/main/Practice/Lesson_0011%20-%20Binary%20Tree/Question%20009/009.png" class="resized-image" alt="image">
---


---

# Answer

## Tree 1

### Pre-order (Root → Left → Right)
2 → 7 → 2 → 6 → 5 → 11 → 5 → 9 → 4

### In-order (Left → Root → Right)
2 → 7 → 5 → 6 → 11 → 2 → 5 → 4 → 9

### Post-order (Left → Right → Root)
2 → 5 → 11 → 6 → 7 → 4 → 9 → 5 → 2

### Level-order (Level by Level)
2 → 7 → 5 → 2 → 6 → 9 → 5 → 11 → 4

---

## Tree 2

### Pre-order (Root → Left → Right)
8 → 5 → 9 → 7 → 1 → 12 → 2 → 4 → 11 → 3

### In-order (Left → Root → Right)
9 → 5 → 1 → 7 → 2 → 12 → 8 → 4 → 3 → 11

### Post-order (Left → Right → Root)
9 → 1 → 2 → 12 → 7 → 5 → 3 → 11 → 4 → 8

### Level-order (Level by Level)
8 → 5 → 4 → 9 → 7 → 11 → 1 → 12 → 3 → 2
