# Based on the diagram, when we use the display linked list function to show the content from the head to the end of the list, what is the height order?
  - A. 157.60, 148.60, 163.55, 178.60
  - B. 157.60, 163.55, 178.60, 148.60

<style>
  .resized-image {
    width: 600px;
    height: auto;
  }
</style>
<img src="https://github.com/itsHudson/Data_Structure/blob/main/Practice/Lesson_0006%20-%20Struct%20and%20Linked%20Lists/Question%20010/010.png" class="resized-image" alt="image">

---

## Answer: B. 157.60, 163.55, 178.60, 148.60

---

## Explanation:

- In a linked list, elements are displayed by following the **next pointer starting from the head node**, not by their visual position.

- From the diagram:
  1. The **head** points to **John (157.60)**  
  2. John's `next` points to **Corrida (163.55)**  
  3. Corrida's `next` points to **Kevin (178.60)**  
  4. Kevin's `next` points to **Monash (148.60)**  
  5. Monash's `next` is `NULL` (end of list)

- So the traversal order is: John → Corrida → Kevin → Monash
- Thus, the heights in order are: 157.60 → 163.55 → 178.60 → 148.60
