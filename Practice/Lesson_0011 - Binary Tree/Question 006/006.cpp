// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Allows input and output operations
#include <string>     // Allows use of string data type

using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Tree Node Structure
// Purpose : Represent each node in the binary tree
// ==========================================================

struct TreeNode
{
    string CarId;
    // Store car ID

    string CarBrand;
    // Store car brand

    string CarType;
    // Store car type

    string CarColor;
    // Store car color

    double CarPrice;
    // Store car price

    int CarAmount;
    // Store car amount

    TreeNode* LeftChild;
    // Pointer to left child node

    TreeNode* RightChild;
    // Pointer to right child node
};


// ==========================================================
// CATEGORY: Create New Node Function
// Purpose : Create and initialize a new tree node
// ==========================================================

TreeNode* CreateNewNode(string NewCarId,
                        string NewCarBrand,
                        string NewCarType,
                        string NewCarColor,
                        double NewCarPrice,
                        int NewCarAmount)
{
    TreeNode* NewTreeNode = new TreeNode;
    // Dynamically create a new tree node

    NewTreeNode->CarId = NewCarId;
    // Store the given car ID in the node

    NewTreeNode->CarBrand = NewCarBrand;
    // Store the given car brand in the node

    NewTreeNode->CarType = NewCarType;
    // Store the given car type in the node

    NewTreeNode->CarColor = NewCarColor;
    // Store the given car color in the node

    NewTreeNode->CarPrice = NewCarPrice;
    // Store the given car price in the node

    NewTreeNode->CarAmount = NewCarAmount;
    // Store the given car amount in the node

    NewTreeNode->LeftChild = NULL;
    // Initialize left child as NULL

    NewTreeNode->RightChild = NULL;
    // Initialize right child as NULL

    return NewTreeNode;
    // Return the new node
}


// ==========================================================
// CATEGORY: Insert Function
// Purpose : Insert node into binary search tree using Car ID
// ==========================================================

TreeNode* InsertNode(TreeNode* RootNode,
                     string NewCarId,
                     string NewCarBrand,
                     string NewCarType,
                     string NewCarColor,
                     double NewCarPrice,
                     int NewCarAmount)
{
    if (RootNode == NULL)
    {
        return CreateNewNode(NewCarId, NewCarBrand, NewCarType, NewCarColor, NewCarPrice, NewCarAmount);
        // Create and return a new node if current position is empty
    }

    if (NewCarId < RootNode->CarId)
    {
        RootNode->LeftChild = InsertNode(RootNode->LeftChild,
                                         NewCarId, NewCarBrand, NewCarType,
                                         NewCarColor, NewCarPrice, NewCarAmount);
        // Insert into left subtree if Car ID is smaller
    }
    else if (NewCarId > RootNode->CarId)
    {
        RootNode->RightChild = InsertNode(RootNode->RightChild,
                                          NewCarId, NewCarBrand, NewCarType,
                                          NewCarColor, NewCarPrice, NewCarAmount);
        // Insert into right subtree if Car ID is greater
    }

    return RootNode;
    // Return the root node
}


// ==========================================================
// CATEGORY: Preorder Traversal
// Purpose : Display nodes in Root-Left-Right order
// ==========================================================

void DisplayPreorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        cout << RootNode->CarId << " ";
        // Display current root first

        DisplayPreorder(RootNode->LeftChild);
        // Traverse left subtree

        DisplayPreorder(RootNode->RightChild);
        // Traverse right subtree
    }
}


// ==========================================================
// CATEGORY: Inorder Traversal
// Purpose : Display nodes in Left-Root-Right order
// ==========================================================

void DisplayInorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        DisplayInorder(RootNode->LeftChild);
        // Traverse left subtree first

        cout << RootNode->CarId << " ";
        // Display current root

        DisplayInorder(RootNode->RightChild);
        // Traverse right subtree
    }
}


// ==========================================================
// CATEGORY: Postorder Traversal
// Purpose : Display nodes in Left-Right-Root order
// ==========================================================

void DisplayPostorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        DisplayPostorder(RootNode->LeftChild);
        // Traverse left subtree first

        DisplayPostorder(RootNode->RightChild);
        // Traverse right subtree second

        cout << RootNode->CarId << " ";
        // Display current root last
    }
}


// ==========================================================
// CATEGORY: Count Total Nodes
// Purpose : Calculate total number of nodes in tree
// ==========================================================

int CountTotalNodes(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return 0;
        // Return 0 if node does not exist
    }

    return 1 + CountTotalNodes(RootNode->LeftChild) + CountTotalNodes(RootNode->RightChild);
    // Count current node plus left and right subtree nodes
}


// ==========================================================
// CATEGORY: Calculate Tree Height
// Purpose : Determine the height of the binary tree
// ==========================================================

int GetTreeHeight(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return -1;
        // Height is counted by number of edges
    }

    int LeftSubtreeHeight = GetTreeHeight(RootNode->LeftChild);
    // Get left subtree height

    int RightSubtreeHeight = GetTreeHeight(RootNode->RightChild);
    // Get right subtree height

    if (LeftSubtreeHeight > RightSubtreeHeight)
    {
        return LeftSubtreeHeight + 1;
        // Return left subtree height if it is larger
    }
    else
    {
        return RightSubtreeHeight + 1;
        // Return right subtree height if it is larger
    }
}


// ==========================================================
// CATEGORY: Sum Car Prices
// Purpose : Calculate total price of all cars in tree
// ==========================================================

double CalculateTotalCarPrice(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return 0;
        // Return 0 if node does not exist
    }

    return RootNode->CarPrice
         + CalculateTotalCarPrice(RootNode->LeftChild)
         + CalculateTotalCarPrice(RootNode->RightChild);
    // Add current car price with left and right subtree prices
}


// ==========================================================
// CATEGORY: Sum Car Amount
// Purpose : Calculate total amount of all cars in tree
// ==========================================================

int CalculateTotalCarAmount(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return 0;
        // Return 0 if node does not exist
    }

    return RootNode->CarAmount
         + CalculateTotalCarAmount(RootNode->LeftChild)
         + CalculateTotalCarAmount(RootNode->RightChild);
    // Add current car amount with left and right subtree amounts
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Construct binary tree and display all results
// ==========================================================

int main()
{
    TreeNode* RootNode = NULL;
    // Initialize tree root as empty

    RootNode = InsertNode(RootNode, "Car0051", "Proton", "X50", "White", 95000, 5);
    RootNode = InsertNode(RootNode, "Car0302", "Honda", "Civic", "Red", 135000, 3);
    RootNode = InsertNode(RootNode, "Car0024", "Toyota", "Yaris", "Red", 87900, 2);
    RootNode = InsertNode(RootNode, "Car0101", "Toyota", "Corolla Cross", "Yellow", 125700, 5);
    RootNode = InsertNode(RootNode, "Car1001", "Perodua", "MyVi", "Blue", 48700, 2);
    RootNode = InsertNode(RootNode, "Car5051", "Mazda", "X30", "Black", 115000, 1);
    // Insert all car records into the binary search tree


    cout << "Preorder Traversal: ";
    DisplayPreorder(RootNode);
    cout << endl;

    cout << "Inorder Traversal: ";
    DisplayInorder(RootNode);
    cout << endl;

    cout << "Postorder Traversal: ";
    DisplayPostorder(RootNode);
    cout << endl << endl;


    cout << "Height of tree: " << GetTreeHeight(RootNode) << endl;
    // Display tree height

    cout << "Number of nodes: " << CountTotalNodes(RootNode) << endl;
    // Display total number of nodes

    cout << "Final sum of car prices: " << CalculateTotalCarPrice(RootNode) << endl;
    // Display total sum of all car prices

    cout << "Final sum of car amount: " << CalculateTotalCarAmount(RootNode) << endl;
    // Display total sum of all car amounts

    return 0;
    // Indicate successful program termination
}
