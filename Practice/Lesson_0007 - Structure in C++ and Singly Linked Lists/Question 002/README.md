# Linked List Deletion
    - Create a function that can remove flower information from a linked list based on the flower name.  
    - Give a detailed explanation of the time and space required to delete an item from a linked list.

---

## Answer:

### Time Complexity: Deleting an item from a linked list involves **two main steps**:
1. **Searching for the node to delete**
   - In a singly linked list, we must traverse from the head to find the target node.
   - In the worst case, we may need to visit all nodes.
   - If there are **n nodes**, this step takes **O(n)** time.

2. **Deleting the node**
   - Once the node (and its previous node) is found, deletion only requires:
     - Updating the pointer (`previous->next = current->next`)
     - Freeing memory (`delete current`)
   - This step takes **O(1)** time.

✔ **Overall Time Complexity: O(n)**  
✔ Best case (node at head): **O(1)**  
✔ Worst case (node at end or not found): **O(n)**  

---

### Space Complexity:

- Deleting a node does not require additional memory that grows with input size.
- Only a few pointer variables (e.g., `current`, `previous`) are used.
- No extra data structures are needed.

✔ **Space Complexity: O(1)** (constant space)

---

## Key Points:

- Traversal dominates the time complexity → **O(n)**
- Actual deletion is very fast → **O(1)**
- Memory usage is minimal → **O(1)**
- If a pointer to the node is already given, deletion can be done in **O(1)** time without traversal.

