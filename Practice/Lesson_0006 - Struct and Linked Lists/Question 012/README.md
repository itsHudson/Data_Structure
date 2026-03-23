# Consider the below code. Assume a new node contain the information of Janice is created. How can we add the Janice node before Corrida by using the current or head pointer?

<style>
  .resized-image {
    width: 600px;
    height: auto;
  }
</style>
<img src="https://github.com/itsHudson/Data_Structure/blob/main/Practice/Lesson_0006%20-%20Struct%20and%20Linked%20Lists/Question%20012/012.png" class="resized-image" alt="image">

---

## Answer:
To insert Janice before Corrida, we must:
  - Traverse the list until we find the node before Corrida
  - Adjust the next pointers correctly

```cpp
// ==========================================================
// CATEGORY: Node Creation
// Purpose : Create a new node with value "Janice"
// ==========================================================

Patient* newNode = new Patient("Janice");
// Dynamically create a new Patient node with name "Janice"



/*
    GOAL:
    Insert "Janice" BEFORE the node with name "Corrida"

    CASE 1: Corrida is the HEAD node
    CASE 2: Corrida is somewhere in the middle
*/



// ==========================================================
// CATEGORY: Special Case - Insert Before Head
// Purpose : Handle situation when Corrida is the first node
// ==========================================================

if (head != NULL && head->name == "Corrida")
{
    newNode->next = head;
    // New node points to current head (Corrida)

    head = newNode;
    // Update head → Janice becomes new first node
}



// ==========================================================
// CATEGORY: General Case - Insert Before Middle Node
// Purpose : Traverse list to find node BEFORE Corrida
// ==========================================================

else
{
    Patient* current = head;
    // Start traversal from the head node

    // ======================================================
    // CATEGORY: Traversal Loop
    // Purpose : Move until the node BEFORE "Corrida"
    // ======================================================

    while (current != NULL && current->next != NULL && current->next->name != "Corrida")
    {
        current = current->next;
        // Move to next node
    }



    // ======================================================
    // CATEGORY: Insertion Logic
    // Purpose : Insert Janice before Corrida
    // ======================================================

    if (current != NULL && current->next != NULL)
    {
        newNode->next = current->next;
        // New node points to Corrida

        current->next = newNode;
        // Previous node now points to Janice
    }
}
```
