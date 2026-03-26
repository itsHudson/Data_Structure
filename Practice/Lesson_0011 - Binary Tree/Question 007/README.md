# Consider the tree and answer the questions below:

<style>
  .resized-image {
    width: 600px;
    height: auto;
  }
</style>
<img src="https://github.com/itsHudson/Data_Structure/blob/main/Practice/Lesson_0011%20-%20Binary%20Tree/Question%20007/007.png" class="resized-image" alt="image">

---

## 1. Which node is the root?
**Answer:** Root = 2
- The root is the top-most node in the tree.

---

## 2. Which nodes are leaves?
**Answer:** Leaves = {2, 1, 7, 2, 44, 8, 11, 55, 87}
- Leaves are nodes that have no children.

---

## 3. Name the parent node (internal vertices)
**Answer:** Parent node = {2, 9, 12, 99, 10}
- These nodes have at least one child, so they are internal (parent) nodes.

---

## 4. List the children node of node 12
**Answer:** 1, 7, 2
- These are the direct children connected below node 12.

---

## 5. List the siblings of node 8
**Answer:** 9, 12, 99, 10
- Siblings share the same parent (node 2).

---

## 6. Compute the depth of the tree
**Answer:** 2
- Depth is the number of edges from root to the deepest leaf.


---

## 7. Compute the height of node 55
**Answer:** 0
- Node 55 is a leaf, so its height is 0.

---

## 8. Evaluate the degree of node 12
**Answer:** 3
- Degree = number of children  
- Node 12 has 3 children.

---

## 9. Evaluate the degree of the tree
**Answer:** 5
- The degree of a tree is the maximum degree of any node.
- Node 2 has the highest degree (5), so the tree degree is 5.
- The degree of a tree = maximum number of children of ANY node in the tree
