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
    string AnimalName;
    // Store the animal name in the node

    double AnimalWeight;
    // Store the animal weight in the node

    TreeNode* LeftChild;
    // Pointer to the left child node

    TreeNode* RightChild;
    // Pointer to the right child node
};


// ==========================================================
// CATEGORY: Create New Node Function
// Purpose : Create and initialize a new tree node
// ==========================================================

TreeNode* CreateNewNode(string NewAnimalName, double NewAnimalWeight)
{
    TreeNode* NewTreeNode = new TreeNode;
    // Dynamically create a new tree node

    NewTreeNode->AnimalName = NewAnimalName;
    // Store the given animal name in the node

    NewTreeNode->AnimalWeight = NewAnimalWeight;
    // Store the given animal weight in the node

    NewTreeNode->LeftChild = NULL;
    // Initialize left child as NULL

    NewTreeNode->RightChild = NULL;
    // Initialize right child as NULL

    return NewTreeNode;
    // Return the address of the new node
}


// ==========================================================
// CATEGORY: Insert Function
// Purpose : Insert a new animal into the binary search tree
// ==========================================================

TreeNode* InsertNode(TreeNode* RootNode, string NewAnimalName, double NewAnimalWeight)
{
    if (RootNode == NULL)
    {
        // If current position is empty, create and return a new node

        return CreateNewNode(NewAnimalName, NewAnimalWeight);
    }

    if (NewAnimalName < RootNode->AnimalName)
    {
        // If new animal name is alphabetically smaller than current node

        RootNode->LeftChild = InsertNode(RootNode->LeftChild, NewAnimalName, NewAnimalWeight);
        // Insert into the left subtree
    }
    else if (NewAnimalName > RootNode->AnimalName)
    {
        // If new animal name is alphabetically greater than current node

        RootNode->RightChild = InsertNode(RootNode->RightChild, NewAnimalName, NewAnimalWeight);
        // Insert into the right subtree
    }

    return RootNode;
    // Return the unchanged root node
}


// ==========================================================
// CATEGORY: Preorder Traversal
// Purpose : Display tree nodes in Root-Left-Right order
// ==========================================================

void DisplayPreorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        cout << RootNode->AnimalName << " ";
        // Display current root node first

        DisplayPreorder(RootNode->LeftChild);
        // Traverse the left subtree

        DisplayPreorder(RootNode->RightChild);
        // Traverse the right subtree
    }
}


// ==========================================================
// CATEGORY: Inorder Traversal
// Purpose : Display tree nodes in Left-Root-Right order
// ==========================================================

void DisplayInorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        DisplayInorder(RootNode->LeftChild);
        // Traverse the left subtree first

        cout << RootNode->AnimalName << " ";
        // Display current root node

        DisplayInorder(RootNode->RightChild);
        // Traverse the right subtree
    }
}


// ==========================================================
// CATEGORY: Postorder Traversal
// Purpose : Display tree nodes in Left-Right-Root order
// ==========================================================

void DisplayPostorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        DisplayPostorder(RootNode->LeftChild);
        // Traverse the left subtree first

        DisplayPostorder(RootNode->RightChild);
        // Traverse the right subtree second

        cout << RootNode->AnimalName << " ";
        // Display current root node last
    }
}


// ==========================================================
// CATEGORY: Count Total Nodes
// Purpose : Calculate number of nodes in the tree
// ==========================================================

int CountTotalNodes(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return 0;
        // Return 0 if tree is empty
    }

    return 1 + CountTotalNodes(RootNode->LeftChild) + CountTotalNodes(RootNode->RightChild);
    // Count current node plus left subtree plus right subtree
}


// ==========================================================
// CATEGORY: Calculate Tree Height
// Purpose : Find the height of the binary tree
// ==========================================================

int GetTreeHeight(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return -1;
        // Height is defined as number of edges
    }

    int LeftSubtreeHeight = GetTreeHeight(RootNode->LeftChild);
    // Get height of left subtree

    int RightSubtreeHeight = GetTreeHeight(RootNode->RightChild);
    // Get height of right subtree

    if (LeftSubtreeHeight > RightSubtreeHeight)
    {
        return LeftSubtreeHeight + 1;
        // Return left height if it is larger
    }
    else
    {
        return RightSubtreeHeight + 1;
        // Return right height if it is larger
    }
}


// ==========================================================
// CATEGORY: Total Weight Function
// Purpose : Calculate the total weight of all animals
// ==========================================================

double CalculateTotalWeight(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return 0.0;
        // Return 0 if current node does not exist
    }

    return RootNode->AnimalWeight
         + CalculateTotalWeight(RootNode->LeftChild)
         + CalculateTotalWeight(RootNode->RightChild);
    // Add current node weight with total weight of left and right subtrees
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Construct tree and display required results
// ==========================================================

int main()
{
    TreeNode* RootNode = NULL;
    // Initialize the root of the tree as empty

    RootNode = InsertNode(RootNode, "Monkey", 35.5);
    // Insert Monkey and its weight

    RootNode = InsertNode(RootNode, "Rat", 2.0);
    // Insert Rat and its weight

    RootNode = InsertNode(RootNode, "Tiger", 220.4);
    // Insert Tiger and its weight

    RootNode = InsertNode(RootNode, "Dog", 18.3);
    // Insert Dog and its weight

    RootNode = InsertNode(RootNode, "Cat", 4.5);
    // Insert Cat and its weight

    RootNode = InsertNode(RootNode, "Elephant", 5400.0);
    // Insert Elephant and its weight

    RootNode = InsertNode(RootNode, "Salmon", 6.8);
    // Insert Salmon and its weight

    RootNode = InsertNode(RootNode, "Zebra", 320.6);
    // Insert Zebra and its weight

    RootNode = InsertNode(RootNode, "Panda", 100.2);
    // Insert Panda and its weight


    cout << "Preorder Traversal: ";
    DisplayPreorder(RootNode);
    cout << endl;

    cout << "Inorder Traversal: ";
    DisplayInorder(RootNode);
    cout << endl;

    cout << "Postorder Traversal: ";
    DisplayPostorder(RootNode);
    cout << endl << endl;


    cout << "Number of nodes in tree: " << CountTotalNodes(RootNode) << endl;
    // Display total number of nodes

    cout << "Height of tree: " << GetTreeHeight(RootNode) << endl;
    // Display height of tree

    cout << "Total weight of animals: " << CalculateTotalWeight(RootNode) << " kg" << endl;
    // Display total weight of all animals in the binary tree

    return 0;
    // Indicate successful program termination
}
