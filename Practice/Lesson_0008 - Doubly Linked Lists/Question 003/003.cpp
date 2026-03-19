// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries for input/output, formatting,
//           and string handling
// ==========================================================

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



// ==========================================================
// CATEGORY: Structure Definition - Cloth
// Purpose : Define one cloth node for a doubly linked list
// ==========================================================

struct Cloth
{
    string ClothID;
    // Variable storing cloth ID

    string ClothName;
    // Variable storing cloth name

    string ClothDescription;
    // Variable storing cloth description

    string ClothColor;
    // Variable storing cloth color

    int ClothQuantity;
    // Variable storing cloth quantity

    string ClothCategory;
    // Variable storing cloth category

    Cloth* PreviousNode;
    // Pointer storing the address of the previous cloth node

    Cloth* NextNode;
    // Pointer storing the address of the next cloth node
};



// ==========================================================
// CATEGORY: Structure Definition - Order
// Purpose : Define one customer order node for a doubly
//           linked list
// ==========================================================

struct Order
{
    string ClothID;
    // Variable storing cloth ID

    string ClothName;
    // Variable storing cloth name

    string ClothColor;
    // Variable storing cloth color

    string ClothCategory;
    // Variable storing cloth category

    int OrderQuantity;
    // Variable storing customer order quantity

    Order* PreviousNode;
    // Pointer storing the address of the previous order node

    Order* NextNode;
    // Pointer storing the address of the next order node
};



// ==========================================================
// CATEGORY: Function - Insert Cloth At End
// Purpose : Insert a new cloth node at the end of the list
// ==========================================================

void InsertClothEnd(Cloth*& ClothHeadPointer, Cloth*& ClothTailPointer,
                    string ClothIDValue, string ClothNameValue, string ClothDescriptionValue,
                    string ClothColorValue, int ClothQuantityValue, string ClothCategoryValue)
{
    Cloth* NewClothNode = new Cloth;
    // Allocate memory for a new cloth node

    NewClothNode->ClothID = ClothIDValue;
    NewClothNode->ClothName = ClothNameValue;
    NewClothNode->ClothDescription = ClothDescriptionValue;
    NewClothNode->ClothColor = ClothColorValue;
    NewClothNode->ClothQuantity = ClothQuantityValue;
    NewClothNode->ClothCategory = ClothCategoryValue;
    // Store cloth information

    NewClothNode->PreviousNode = ClothTailPointer;
    // New node points back to the current tail

    NewClothNode->NextNode = NULL;
    // Last node should point to NULL

    if (ClothTailPointer != NULL)
    {
        ClothTailPointer->NextNode = NewClothNode;
        // Old tail points forward to new node
    }
    else
    {
        ClothHeadPointer = NewClothNode;
        // If list is empty, new node also becomes head
    }

    ClothTailPointer = NewClothNode;
    // Move tail pointer to the new node
}



// ==========================================================
// CATEGORY: Function - Insert Order At End
// Purpose : Insert a new customer order node at the end
//           of the order list
// ==========================================================

void InsertOrderEnd(Order*& OrderHeadPointer, Order*& OrderTailPointer,
                    string ClothIDValue, string ClothNameValue,
                    string ClothColorValue, string ClothCategoryValue,
                    int OrderQuantityValue)
{
    Order* NewOrderNode = new Order;
    // Allocate memory for a new order node

    NewOrderNode->ClothID = ClothIDValue;
    NewOrderNode->ClothName = ClothNameValue;
    NewOrderNode->ClothColor = ClothColorValue;
    NewOrderNode->ClothCategory = ClothCategoryValue;
    NewOrderNode->OrderQuantity = OrderQuantityValue;
    // Store order information

    NewOrderNode->PreviousNode = OrderTailPointer;
    // New node points back to the current tail

    NewOrderNode->NextNode = NULL;
    // Last node should point to NULL

    if (OrderTailPointer != NULL)
    {
        OrderTailPointer->NextNode = NewOrderNode;
        // Old tail points forward to new node
    }
    else
    {
        OrderHeadPointer = NewOrderNode;
        // If list is empty, new node also becomes head
    }

    OrderTailPointer = NewOrderNode;
    // Move tail pointer to the new node
}



// ==========================================================
// CATEGORY: Function - Display Cloth List
// Purpose : Display all cloth items in the cloth list
// ==========================================================

void DisplayClothList(Cloth* ClothHeadPointer)
{
    if (ClothHeadPointer == NULL)
    {
        cout << "Cloth list is empty.\n";
        // Display message if cloth list is empty

        return;
    }

    cout << "\n+--------+------------------------+----------------+----------+----------+----------+\n";
    cout << "| ID     | Cloth Name             | Description    | Color    | Quantity | Category |\n";
    cout << "+--------+------------------------+----------------+----------+----------+----------+\n";
    // Print cloth table header

    Cloth* TraversalPointer = ClothHeadPointer;
    // Pointer used to traverse cloth list

    while (TraversalPointer != NULL)
    {
        cout << "| " << setw(6) << left << TraversalPointer->ClothID << " ";
        cout << "| " << setw(22) << left << TraversalPointer->ClothName;
        cout << "| " << setw(14) << left << TraversalPointer->ClothDescription;
        cout << "| " << setw(8) << left << TraversalPointer->ClothColor;
        cout << "| " << setw(8) << left << TraversalPointer->ClothQuantity;
        cout << "| " << setw(8) << left << TraversalPointer->ClothCategory << " |\n";
        cout << "+--------+------------------------+----------------+----------+----------+----------+\n";
        // Display one cloth row

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next cloth node
    }

    cout << endl;
    // Print blank line after display
}



// ==========================================================
// CATEGORY: Function - Display Order List
// Purpose : Display all customer orders
// ==========================================================

void DisplayOrderList(Order* OrderHeadPointer)
{
    if (OrderHeadPointer == NULL)
    {
        cout << "No customer orders found.\n";
        // Display message if order list is empty

        return;
    }

    cout << "\n+--------+------------------------+----------+----------+----------------+\n";
    cout << "| ID     | Cloth Name             | Color    | Category | Order Quantity |\n";
    cout << "+--------+------------------------+----------+----------+----------------+\n";
    // Print order table header

    Order* TraversalPointer = OrderHeadPointer;
    // Pointer used to traverse order list

    while (TraversalPointer != NULL)
    {
        cout << "| " << setw(6) << left << TraversalPointer->ClothID << " ";
        cout << "| " << setw(22) << left << TraversalPointer->ClothName;
        cout << "| " << setw(8) << left << TraversalPointer->ClothColor;
        cout << "| " << setw(8) << left << TraversalPointer->ClothCategory;
        cout << "| " << setw(14) << left << TraversalPointer->OrderQuantity << " |\n";
        cout << "+--------+------------------------+----------+----------+----------------+\n";
        // Display one order row

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next order node
    }

    cout << endl;
    // Print blank line after display
}



// ==========================================================
// CATEGORY: Function - Insert Sorted By Category Descending
// Purpose : Insert a cloth node into the correct position
//           so the temporary list stays sorted by category
//           in descending order
// ==========================================================

void InsertSortedByCategoryDescending(Cloth*& SortedHeadPointer, Cloth*& SortedTailPointer,
                                      string ClothIDValue, string ClothNameValue, string ClothDescriptionValue,
                                      string ClothColorValue, int ClothQuantityValue, string ClothCategoryValue)
{
    Cloth* NewClothNode = new Cloth;
    // Allocate memory for a new cloth node

    NewClothNode->ClothID = ClothIDValue;
    NewClothNode->ClothName = ClothNameValue;
    NewClothNode->ClothDescription = ClothDescriptionValue;
    NewClothNode->ClothColor = ClothColorValue;
    NewClothNode->ClothQuantity = ClothQuantityValue;
    NewClothNode->ClothCategory = ClothCategoryValue;
    // Store cloth information

    NewClothNode->PreviousNode = NULL;
    NewClothNode->NextNode = NULL;
    // Initialize both pointers to NULL

    if (SortedHeadPointer == NULL)
    {
        SortedHeadPointer = NewClothNode;
        SortedTailPointer = NewClothNode;
        // If sorted list is empty, new node becomes both head and tail

        return;
    }

    if (ClothCategoryValue > SortedHeadPointer->ClothCategory)
    {
        NewClothNode->NextNode = SortedHeadPointer;
        SortedHeadPointer->PreviousNode = NewClothNode;
        SortedHeadPointer = NewClothNode;
        // Insert before current head

        return;
    }

    Cloth* CurrentPointer = SortedHeadPointer;
    // Pointer used to find correct insert position

    while (CurrentPointer->NextNode != NULL &&
           CurrentPointer->NextNode->ClothCategory >= ClothCategoryValue)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move while category order is still descending
    }

    NewClothNode->NextNode = CurrentPointer->NextNode;
    NewClothNode->PreviousNode = CurrentPointer;
    // Link new node to surrounding nodes

    if (CurrentPointer->NextNode != NULL)
    {
        CurrentPointer->NextNode->PreviousNode = NewClothNode;
    }
    else
    {
        SortedTailPointer = NewClothNode;
        // Update tail if inserted at end
    }

    CurrentPointer->NextNode = NewClothNode;
    // Current node points to new node
}



// ==========================================================
// CATEGORY: Function - Insert Sorted By Quantity Ascending
// Purpose : Insert a cloth node into the correct position
//           so the temporary list stays sorted by quantity
//           in ascending order
// ==========================================================

void InsertSortedByQuantityAscending(Cloth*& SortedHeadPointer, Cloth*& SortedTailPointer,
                                     string ClothIDValue, string ClothNameValue, string ClothDescriptionValue,
                                     string ClothColorValue, int ClothQuantityValue, string ClothCategoryValue)
{
    Cloth* NewClothNode = new Cloth;
    // Allocate memory for a new cloth node

    NewClothNode->ClothID = ClothIDValue;
    NewClothNode->ClothName = ClothNameValue;
    NewClothNode->ClothDescription = ClothDescriptionValue;
    NewClothNode->ClothColor = ClothColorValue;
    NewClothNode->ClothQuantity = ClothQuantityValue;
    NewClothNode->ClothCategory = ClothCategoryValue;
    // Store cloth information

    NewClothNode->PreviousNode = NULL;
    NewClothNode->NextNode = NULL;
    // Initialize both pointers to NULL

    if (SortedHeadPointer == NULL)
    {
        SortedHeadPointer = NewClothNode;
        SortedTailPointer = NewClothNode;
        // If sorted list is empty, new node becomes both head and tail

        return;
    }

    if (ClothQuantityValue < SortedHeadPointer->ClothQuantity)
    {
        NewClothNode->NextNode = SortedHeadPointer;
        SortedHeadPointer->PreviousNode = NewClothNode;
        SortedHeadPointer = NewClothNode;
        // Insert before current head

        return;
    }

    Cloth* CurrentPointer = SortedHeadPointer;
    // Pointer used to find correct insert position

    while (CurrentPointer->NextNode != NULL &&
           CurrentPointer->NextNode->ClothQuantity <= ClothQuantityValue)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move while quantity order is still ascending
    }

    NewClothNode->NextNode = CurrentPointer->NextNode;
    NewClothNode->PreviousNode = CurrentPointer;
    // Link new node to surrounding nodes

    if (CurrentPointer->NextNode != NULL)
    {
        CurrentPointer->NextNode->PreviousNode = NewClothNode;
    }
    else
    {
        SortedTailPointer = NewClothNode;
        // Update tail if inserted at end
    }

    CurrentPointer->NextNode = NewClothNode;
    // Current node points to new node
}



// ==========================================================
// CATEGORY: Function - Display Sorted By Category Descending
// Purpose : Create a temporary sorted copy of the cloth list,
//           display it, then delete it
// ==========================================================

void DisplaySortedByCategoryDescending(Cloth* ClothHeadPointer)
{
    if (ClothHeadPointer == NULL)
    {
        cout << "Cloth list is empty.\n";
        return;
    }

    Cloth* SortedHeadPointer = NULL;
    Cloth* SortedTailPointer = NULL;
    // Temporary sorted list pointers

    Cloth* TraversalPointer = ClothHeadPointer;
    // Pointer used to traverse original list

    while (TraversalPointer != NULL)
    {
        InsertSortedByCategoryDescending(SortedHeadPointer, SortedTailPointer,
                                         TraversalPointer->ClothID,
                                         TraversalPointer->ClothName,
                                         TraversalPointer->ClothDescription,
                                         TraversalPointer->ClothColor,
                                         TraversalPointer->ClothQuantity,
                                         TraversalPointer->ClothCategory);
        // Insert each cloth item into temporary sorted list

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next cloth node
    }

    cout << "\n[Cloth List Sorted by Category (Descending)]\n";
    // Display heading

    DisplayClothList(SortedHeadPointer);
    // Display temporary sorted cloth list

    while (SortedHeadPointer != NULL)
    {
        Cloth* NodeToDelete = SortedHeadPointer;
        SortedHeadPointer = SortedHeadPointer->NextNode;
        delete NodeToDelete;
        // Delete temporary sorted list nodes
    }

    SortedTailPointer = NULL;
    // Reset temporary tail pointer
}



// ==========================================================
// CATEGORY: Function - Display Sorted By Quantity Ascending
// Purpose : Create a temporary sorted copy of the cloth list,
//           display it, then delete it
// ==========================================================

void DisplaySortedByQuantityAscending(Cloth* ClothHeadPointer)
{
    if (ClothHeadPointer == NULL)
    {
        cout << "Cloth list is empty.\n";
        return;
    }

    Cloth* SortedHeadPointer = NULL;
    Cloth* SortedTailPointer = NULL;
    // Temporary sorted list pointers

    Cloth* TraversalPointer = ClothHeadPointer;
    // Pointer used to traverse original list

    while (TraversalPointer != NULL)
    {
        InsertSortedByQuantityAscending(SortedHeadPointer, SortedTailPointer,
                                        TraversalPointer->ClothID,
                                        TraversalPointer->ClothName,
                                        TraversalPointer->ClothDescription,
                                        TraversalPointer->ClothColor,
                                        TraversalPointer->ClothQuantity,
                                        TraversalPointer->ClothCategory);
        // Insert each cloth item into temporary sorted list

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next cloth node
    }

    cout << "\n[Cloth List Sorted by Quantity (Ascending)]\n";
    // Display heading

    DisplayClothList(SortedHeadPointer);
    // Display temporary sorted cloth list

    while (SortedHeadPointer != NULL)
    {
        Cloth* NodeToDelete = SortedHeadPointer;
        SortedHeadPointer = SortedHeadPointer->NextNode;
        delete NodeToDelete;
        // Delete temporary sorted list nodes
    }

    SortedTailPointer = NULL;
    // Reset temporary tail pointer
}



// ==========================================================
// CATEGORY: Function - View Cloth One By One
// Purpose : Simulate previous and next navigation for cloth items
// ==========================================================

void ViewClothOneByOne(Cloth* ClothHeadPointer)
{
    if (ClothHeadPointer == NULL)
    {
        cout << "Cloth list is empty.\n";
        return;
    }

    Cloth* CurrentPointer = ClothHeadPointer;
    // Start from the first cloth item

    char UserCommand;
    // Variable storing user navigation command

    do
    {
        cout << "\n========================================\n";
        cout << "Current Cloth Item\n";
        cout << "========================================\n";
        cout << "Cloth ID    : " << CurrentPointer->ClothID << endl;
        cout << "Cloth Name  : " << CurrentPointer->ClothName << endl;
        cout << "Description : " << CurrentPointer->ClothDescription << endl;
        cout << "Color       : " << CurrentPointer->ClothColor << endl;
        cout << "Quantity    : " << CurrentPointer->ClothQuantity << endl;
        cout << "Category    : " << CurrentPointer->ClothCategory << endl;
        cout << "========================================\n";
        cout << "P = Previous | N = Next | Q = Quit\n";
        cout << "Enter command: ";
        // Display one cloth item

        cin >> UserCommand;
        // Read navigation command

        if (UserCommand == 'P' || UserCommand == 'p')
        {
            if (CurrentPointer->PreviousNode != NULL)
            {
                CurrentPointer = CurrentPointer->PreviousNode;
                // Move to previous cloth item
            }
            else
            {
                cout << "This is the first cloth item.\n";
            }
        }
        else if (UserCommand == 'N' || UserCommand == 'n')
        {
            if (CurrentPointer->NextNode != NULL)
            {
                CurrentPointer = CurrentPointer->NextNode;
                // Move to next cloth item
            }
            else
            {
                cout << "This is the last cloth item.\n";
            }
        }
        else if (UserCommand == 'Q' || UserCommand == 'q')
        {
            cout << "Exit cloth view.\n";
        }
        else
        {
            cout << "Invalid command.\n";
        }

    } while (UserCommand != 'Q' && UserCommand != 'q');
    // Repeat until user quits
}



// ==========================================================
// CATEGORY: Function - View Order One By One
// Purpose : Simulate previous and next navigation for orders
// ==========================================================

void ViewOrderOneByOne(Order* OrderHeadPointer)
{
    if (OrderHeadPointer == NULL)
    {
        cout << "No customer orders found.\n";
        return;
    }

    Order* CurrentPointer = OrderHeadPointer;
    // Start from the first order item

    char UserCommand;
    // Variable storing user navigation command

    do
    {
        cout << "\n========================================\n";
        cout << "Current Customer Order\n";
        cout << "========================================\n";
        cout << "Cloth ID       : " << CurrentPointer->ClothID << endl;
        cout << "Cloth Name     : " << CurrentPointer->ClothName << endl;
        cout << "Color          : " << CurrentPointer->ClothColor << endl;
        cout << "Category       : " << CurrentPointer->ClothCategory << endl;
        cout << "Order Quantity : " << CurrentPointer->OrderQuantity << endl;
        cout << "========================================\n";
        cout << "P = Previous | N = Next | Q = Quit\n";
        cout << "Enter command: ";
        // Display one order item

        cin >> UserCommand;
        // Read navigation command

        if (UserCommand == 'P' || UserCommand == 'p')
        {
            if (CurrentPointer->PreviousNode != NULL)
            {
                CurrentPointer = CurrentPointer->PreviousNode;
                // Move to previous order
            }
            else
            {
                cout << "This is the first order.\n";
            }
        }
        else if (UserCommand == 'N' || UserCommand == 'n')
        {
            if (CurrentPointer->NextNode != NULL)
            {
                CurrentPointer = CurrentPointer->NextNode;
                // Move to next order
            }
            else
            {
                cout << "This is the last order.\n";
            }
        }
        else if (UserCommand == 'Q' || UserCommand == 'q')
        {
            cout << "Exit order view.\n";
        }
        else
        {
            cout << "Invalid command.\n";
        }

    } while (UserCommand != 'Q' && UserCommand != 'q');
    // Repeat until user quits
}



// ==========================================================
// CATEGORY: Function - Filter By Color
// Purpose : Search and display cloth items matching a color
// ==========================================================

bool FilterByColor(Cloth* ClothHeadPointer, const string& TargetColor)
{
    if (ClothHeadPointer == NULL)
    {
        cout << "Cloth list is empty.\n";
        return false;
    }

    bool IsClothFound = false;
    // Flag tracking whether any matching cloth item exists

    cout << "\n[Filter Result for Color: " << TargetColor << "]\n";
    cout << "+--------+------------------------+----------------+----------+----------+----------+\n";
    cout << "| ID     | Cloth Name             | Description    | Color    | Quantity | Category |\n";
    cout << "+--------+------------------------+----------------+----------+----------+----------+\n";
    // Print filter result header

    Cloth* TraversalPointer = ClothHeadPointer;
    // Pointer used to traverse the cloth list

    while (TraversalPointer != NULL)
    {
        if (TraversalPointer->ClothColor == TargetColor)
        {
            cout << "| " << setw(6) << left << TraversalPointer->ClothID << " ";
            cout << "| " << setw(22) << left << TraversalPointer->ClothName;
            cout << "| " << setw(14) << left << TraversalPointer->ClothDescription;
            cout << "| " << setw(8) << left << TraversalPointer->ClothColor;
            cout << "| " << setw(8) << left << TraversalPointer->ClothQuantity;
            cout << "| " << setw(8) << left << TraversalPointer->ClothCategory << " |\n";
            cout << "+--------+------------------------+----------------+----------+----------+----------+\n";
            // Display one matching cloth item

            IsClothFound = true;
        }

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next cloth node
    }

    if (!IsClothFound)
    {
        cout << "No cloth items found for this color.\n\n";
    }
    else
    {
        cout << endl;
    }

    return IsClothFound;
}



// ==========================================================
// CATEGORY: Function - Find Cloth By ID
// Purpose : Find and return a cloth node by cloth ID
// ==========================================================

Cloth* FindClothByID(Cloth* ClothHeadPointer, const string& TargetClothID)
{
    Cloth* TraversalPointer = ClothHeadPointer;
    // Pointer used to traverse the cloth list

    while (TraversalPointer != NULL)
    {
        if (TraversalPointer->ClothID == TargetClothID)
        {
            return TraversalPointer;
            // Return matching cloth node
        }

        TraversalPointer = TraversalPointer->NextNode;
        // Move to next cloth node
    }

    return NULL;
    // Return NULL if cloth ID is not found
}



// ==========================================================
// CATEGORY: Function - Add Single Order
// Purpose : Add one customer order if cloth exists and stock
//           is sufficient
// ==========================================================

bool AddSingleOrder(Cloth* ClothHeadPointer,
                    Order*& OrderHeadPointer, Order*& OrderTailPointer,
                    const string& TargetClothID, int OrderQuantityValue)
{
    Cloth* ClothPointer = FindClothByID(ClothHeadPointer, TargetClothID);
    // Search for the cloth item by ID

    if (ClothPointer == NULL)
    {
        return false;
        // Cloth ID not found
    }

    if (OrderQuantityValue <= 0)
    {
        return false;
        // Invalid order quantity
    }

    if (ClothPointer->ClothQuantity < OrderQuantityValue)
    {
        return false;
        // Not enough stock available
    }

    ClothPointer->ClothQuantity = ClothPointer->ClothQuantity - OrderQuantityValue;
    // Reduce available cloth quantity

    InsertOrderEnd(OrderHeadPointer, OrderTailPointer,
                   ClothPointer->ClothID,
                   ClothPointer->ClothName,
                   ClothPointer->ClothColor,
                   ClothPointer->ClothCategory,
                   OrderQuantityValue);
    // Add the order into order list

    return true;
}



// ==========================================================
// CATEGORY: Function - Delete Cloth By ID
// Purpose : Delete a cloth item based on cloth ID
// ==========================================================

bool DeleteClothByID(Cloth*& ClothHeadPointer, Cloth*& ClothTailPointer, const string& TargetClothID)
{
    if (ClothHeadPointer == NULL)
    {
        return false;
        // Cannot delete from empty cloth list
    }

    Cloth* CurrentPointer = ClothHeadPointer;
    // Pointer used to search for cloth ID

    while (CurrentPointer != NULL &&
           CurrentPointer->ClothID != TargetClothID)
    {
        CurrentPointer = CurrentPointer->NextNode;
        // Move until matching cloth ID is found
    }

    if (CurrentPointer == NULL)
    {
        return false;
        // Cloth ID not found
    }

    if (CurrentPointer == ClothHeadPointer && CurrentPointer == ClothTailPointer)
    {
        ClothHeadPointer = NULL;
        ClothTailPointer = NULL;
        // Only one node exists
    }
    else if (CurrentPointer == ClothHeadPointer)
    {
        ClothHeadPointer = ClothHeadPointer->NextNode;
        ClothHeadPointer->PreviousNode = NULL;
        // Delete first cloth node
    }
    else if (CurrentPointer == ClothTailPointer)
    {
        ClothTailPointer = ClothTailPointer->PreviousNode;
        ClothTailPointer->NextNode = NULL;
        // Delete last cloth node
    }
    else
    {
        CurrentPointer->PreviousNode->NextNode = CurrentPointer->NextNode;
        CurrentPointer->NextNode->PreviousNode = CurrentPointer->PreviousNode;
        // Delete middle cloth node
    }

    delete CurrentPointer;
    // Delete matched cloth node

    return true;
}



// ==========================================================
// CATEGORY: Function - Input Cloth
// Purpose : Read one cloth item's information from the user
// ==========================================================

void InputCloth(string& ClothIDValue, string& ClothNameValue, string& ClothDescriptionValue,
                string& ClothColorValue, int& ClothQuantityValue, string& ClothCategoryValue)
{
    cout << "Enter Cloth ID: ";
    getline(cin, ClothIDValue);
    // Read cloth ID

    cout << "Enter Cloth Name: ";
    getline(cin, ClothNameValue);
    // Read cloth name

    cout << "Enter Description: ";
    getline(cin, ClothDescriptionValue);
    // Read cloth description

    cout << "Enter Color: ";
    getline(cin, ClothColorValue);
    // Read cloth color

    cout << "Enter Quantity: ";
    cin >> ClothQuantityValue;
    // Read cloth quantity

    cin.ignore();
    // Clear leftover newline

    cout << "Enter Category: ";
    getline(cin, ClothCategoryValue);
    // Read cloth category
}



// ==========================================================
// CATEGORY: Function - Clear Cloth List
// Purpose : Delete all cloth nodes before program ends
// ==========================================================

void ClearClothList(Cloth*& ClothHeadPointer, Cloth*& ClothTailPointer)
{
    while (ClothHeadPointer != NULL)
    {
        Cloth* NodeToDelete = ClothHeadPointer;
        // Store current head node

        ClothHeadPointer = ClothHeadPointer->NextNode;
        // Move to next cloth node

        delete NodeToDelete;
        // Delete old cloth node
    }

    ClothTailPointer = NULL;
    // Reset cloth tail pointer
}



// ==========================================================
// CATEGORY: Function - Clear Order List
// Purpose : Delete all order nodes before program ends
// ==========================================================

void ClearOrderList(Order*& OrderHeadPointer, Order*& OrderTailPointer)
{
    while (OrderHeadPointer != NULL)
    {
        Order* NodeToDelete = OrderHeadPointer;
        // Store current head order node

        OrderHeadPointer = OrderHeadPointer->NextNode;
        // Move to next order node

        delete NodeToDelete;
        // Delete old order node
    }

    OrderTailPointer = NULL;
    // Reset order tail pointer
}



// ==========================================================
// CATEGORY: Function - Customer Menu
// Purpose : Display and control all customer operations
// ==========================================================

void CustomerMenu(Cloth*& ClothHeadPointer, Cloth*& ClothTailPointer,
                  Order*& OrderHeadPointer, Order*& OrderTailPointer)
{
    int UserChoice;
    // Variable storing customer menu choice

    do
    {
        cout << "\n============= CUSTOMER MENU =============\n";
        cout << "1. View all cloth list without sorting\n";
        cout << "2. Sort cloth list by category (descending)\n";
        cout << "3. View single cloth item one by one\n";
        cout << "4. Filter cloth list by color\n";
        cout << "5. Add a single order\n";
        cout << "0. Exit to Login Page\n";
        cout << "Choose: ";
        // Display customer menu

        cin >> UserChoice;
        cin.ignore();
        // Read customer menu choice and clear leftover newline

        if (UserChoice == 1)
        {
            DisplayClothList(ClothHeadPointer);
            // Display all cloth items
        }
        else if (UserChoice == 2)
        {
            DisplaySortedByCategoryDescending(ClothHeadPointer);
            // Display cloth list sorted by category descending
        }
        else if (UserChoice == 3)
        {
            ViewClothOneByOne(ClothHeadPointer);
            // View cloth items one by one
        }
        else if (UserChoice == 4)
        {
            string TargetColor;
            // Variable storing color to search

            cout << "Enter color to search: ";
            getline(cin, TargetColor);
            // Read target color

            FilterByColor(ClothHeadPointer, TargetColor);
            // Display filter result
        }
        else if (UserChoice == 5)
        {
            string TargetClothID;
            int OrderQuantityValue;
            // Variables storing order input

            cout << "Enter Cloth ID to order: ";
            getline(cin, TargetClothID);
            // Read cloth ID

            cout << "Enter order quantity: ";
            cin >> OrderQuantityValue;
            cin.ignore();
            // Read order quantity

            Cloth* ClothPointer = FindClothByID(ClothHeadPointer, TargetClothID);
            // Check whether cloth exists

            if (ClothPointer == NULL)
            {
                cout << "Cloth ID not found.\n";
            }
            else if (OrderQuantityValue <= 0)
            {
                cout << "Invalid order quantity.\n";
            }
            else if (ClothPointer->ClothQuantity < OrderQuantityValue)
            {
                cout << "Not enough stock available.\n";
            }
            else
            {
                AddSingleOrder(ClothHeadPointer, OrderHeadPointer, OrderTailPointer,
                               TargetClothID, OrderQuantityValue);
                // Add customer order

                cout << "Order added successfully.\n";
            }
        }
        else if (UserChoice == 0)
        {
            cout << "Back to Login Page.\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while (UserChoice != 0);
    // Repeat until customer exits
}



// ==========================================================
// CATEGORY: Function - Admin Menu
// Purpose : Display and control all admin operations
// ==========================================================

void AdminMenu(Cloth*& ClothHeadPointer, Cloth*& ClothTailPointer,
               Order*& OrderHeadPointer, Order*& OrderTailPointer)
{
    int UserChoice;
    // Variable storing admin menu choice

    do
    {
        cout << "\n=============== ADMIN MENU ===============\n";
        cout << "1. Add a new cloth into the system\n";
        cout << "2. Delete a cloth based on cloth ID\n";
        cout << "3. View cloth list without sorting\n";
        cout << "4. Sort cloth list by quantity (ascending)\n";
        cout << "5. View all customer orders\n";
        cout << "6. View single order one by one\n";
        cout << "0. Exit to Login Page\n";
        cout << "Choose: ";
        // Display admin menu

        cin >> UserChoice;
        cin.ignore();
        // Read admin menu choice and clear leftover newline

        if (UserChoice == 1)
        {
            string ClothIDValue;
            string ClothNameValue;
            string ClothDescriptionValue;
            string ClothColorValue;
            string ClothCategoryValue;
            int ClothQuantityValue;
            // Variables storing new cloth input

            cout << "\n[Add New Cloth]\n";

            InputCloth(ClothIDValue, ClothNameValue, ClothDescriptionValue,
                       ClothColorValue, ClothQuantityValue, ClothCategoryValue);
            // Read one cloth item

            InsertClothEnd(ClothHeadPointer, ClothTailPointer,
                           ClothIDValue, ClothNameValue, ClothDescriptionValue,
                           ClothColorValue, ClothQuantityValue, ClothCategoryValue);
            // Insert cloth into cloth list

            cout << "New cloth added successfully.\n";
        }
        else if (UserChoice == 2)
        {
            string TargetClothID;
            // Variable storing cloth ID to delete

            cout << "Enter Cloth ID to delete: ";
            getline(cin, TargetClothID);
            // Read cloth ID

            if (DeleteClothByID(ClothHeadPointer, ClothTailPointer, TargetClothID))
            {
                cout << "Cloth deleted successfully.\n";
            }
            else
            {
                cout << "Cloth ID not found.\n";
            }
        }
        else if (UserChoice == 3)
        {
            DisplayClothList(ClothHeadPointer);
            // Display cloth list without sorting
        }
        else if (UserChoice == 4)
        {
            DisplaySortedByQuantityAscending(ClothHeadPointer);
            // Display cloth list sorted by quantity ascending
        }
        else if (UserChoice == 5)
        {
            DisplayOrderList(OrderHeadPointer);
            // Display all customer orders
        }
        else if (UserChoice == 6)
        {
            ViewOrderOneByOne(OrderHeadPointer);
            // View orders one by one
        }
        else if (UserChoice == 0)
        {
            cout << "Back to Login Page.\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while (UserChoice != 0);
    // Repeat until admin exits
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    Cloth* ClothHeadPointer = NULL;
    Cloth* ClothTailPointer = NULL;
    // Cloth doubly linked list starts empty

    Order* OrderHeadPointer = NULL;
    Order* OrderTailPointer = NULL;
    // Order doubly linked list starts empty



    // ======================================================
    // CATEGORY: Insert Initial Cloth Items
    // Purpose : Start the system with default cloth items
    // ======================================================

    InsertClothEnd(ClothHeadPointer, ClothTailPointer,
                   "SRT001", "Mickey Mouse T-Shirt", "Long Sleeve", "Black", 23, "Shirt");
    InsertClothEnd(ClothHeadPointer, ClothTailPointer,
                   "SRT002", "Butterfly Blouse", "Short Sleeve", "White", 5, "Shirt");
    InsertClothEnd(ClothHeadPointer, ClothTailPointer,
                   "SKT001", "Bubble Skirt", "Short Skirt", "Yellow", 30, "Skirt");
    InsertClothEnd(ClothHeadPointer, ClothTailPointer,
                   "SKT002", "Jeans Skirt", "Long Skirt", "Yellow", 14, "Skirt");
    InsertClothEnd(ClothHeadPointer, ClothTailPointer,
                   "SKT003", "Cotton Skirt", "Long Skirt", "Black", 15, "Skirt");
    InsertClothEnd(ClothHeadPointer, ClothTailPointer,
                   "HAT001", "Black Hat", "With Apple", "Black", 2, "Hat");
    // Insert default cloth items into the system



    int LoginChoice;
    // Variable storing login menu choice

    do
    {
        cout << "\n============= LOGIN PAGE =============\n";
        cout << "1. Customer\n";
        cout << "2. Admin\n";
        cout << "0. Exit Program\n";
        cout << "Choose: ";
        // Display login menu

        cin >> LoginChoice;
        cin.ignore();
        // Read login choice and clear leftover newline

        if (LoginChoice == 1)
        {
            CustomerMenu(ClothHeadPointer, ClothTailPointer,
                         OrderHeadPointer, OrderTailPointer);
            // Open customer menu
        }
        else if (LoginChoice == 2)
        {
            AdminMenu(ClothHeadPointer, ClothTailPointer,
                      OrderHeadPointer, OrderTailPointer);
            // Open admin menu
        }
        else if (LoginChoice == 0)
        {
            cout << "Exiting program...\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while (LoginChoice != 0);
    // Repeat until user exits the program



    // ======================================================
    // CATEGORY: Memory Cleanup
    // Purpose : Delete all remaining nodes before program ends
    // ======================================================

    ClearClothList(ClothHeadPointer, ClothTailPointer);
    // Delete all cloth nodes

    ClearOrderList(OrderHeadPointer, OrderTailPointer);
    // Delete all order nodes



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
