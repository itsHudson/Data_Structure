// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Provides input and output functionality
#include <string>     // Allows use of string data type

using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Tree Node Structure
// Purpose : Represent one node in the binary search tree
// ==========================================================

struct TreeNode
{
    string AnimalName;
    // Stores the animal name in the current node

    TreeNode* LeftChild;
    // Pointer to the left child node

    TreeNode* RightChild;
    // Pointer to the right child node
};


// ==========================================================
// CATEGORY: Create New Node
// Purpose : Create and initialize a new tree node
// ==========================================================

TreeNode* CreateNewNode(string NewAnimalName)
{
    TreeNode* NewTreeNode = new TreeNode;
    // Dynamically create a new tree node

    NewTreeNode->AnimalName = NewAnimalName;
    // Store the animal name in the new node

    NewTreeNode->LeftChild = NULL;
    // Set left child pointer to NULL

    NewTreeNode->RightChild = NULL;
    // Set right child pointer to NULL

    return NewTreeNode;
    // Return the address of the new node
}


// ==========================================================
// CATEGORY: Insert Node (Binary Search Tree)
// Purpose : Insert a new animal name into the BST
// ==========================================================

TreeNode* InsertNode(TreeNode* RootNode, string NewAnimalName)
{
    if (RootNode == NULL)
    {
        return CreateNewNode(NewAnimalName);
        // Create a new node if current root is empty
    }

    if (NewAnimalName < RootNode->AnimalName)
    {
        RootNode->LeftChild =
            InsertNode(RootNode->LeftChild, NewAnimalName);
        // Insert into left subtree if value is smaller
    }
    else if (NewAnimalName > RootNode->AnimalName)
    {
        RootNode->RightChild =
            InsertNode(RootNode->RightChild, NewAnimalName);
        // Insert into right subtree if value is larger
    }

    return RootNode;
    // Return the unchanged root node pointer
}


// ==========================================================
// CATEGORY: Preorder Traversal
// Purpose : Display tree nodes in preorder sequence
// ==========================================================

void DisplayPreorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        cout << RootNode->AnimalName << " ";
        // Display current node first

        DisplayPreorder(RootNode->LeftChild);
        // Traverse left subtree

        DisplayPreorder(RootNode->RightChild);
        // Traverse right subtree
    }
}


// ==========================================================
// CATEGORY: Inorder Traversal
// Purpose : Display tree nodes in inorder sequence
// ==========================================================

void DisplayInorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        DisplayInorder(RootNode->LeftChild);
        // Traverse left subtree first

        cout << RootNode->AnimalName << " ";
        // Display current node

        DisplayInorder(RootNode->RightChild);
        // Traverse right subtree
    }
}


// ==========================================================
// CATEGORY: Postorder Traversal
// Purpose : Display tree nodes in postorder sequence
// ==========================================================

void DisplayPostorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        DisplayPostorder(RootNode->LeftChild);
        // Traverse left subtree first

        DisplayPostorder(RootNode->RightChild);
        // Traverse right subtree second

        cout << RootNode->AnimalName << " ";
        // Display current node last
    }
}


// ==========================================================
// CATEGORY: Count Total Nodes
// Purpose : Calculate number of nodes in tree
// ==========================================================

int CountTotalNodes(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return 0;
        // Return 0 if the tree is empty
    }

    return 1 +
           CountTotalNodes(RootNode->LeftChild) +
           CountTotalNodes(RootNode->RightChild);
    // Count current node + left subtree + right subtree
}


// ==========================================================
// CATEGORY: Calculate Tree Height
// Purpose : Find longest path from root to leaf
// ==========================================================

int GetTreeHeight(TreeNode* RootNode)
{
    if (RootNode == NULL)
    {
        return -1;
        // Height defined as number of edges
    }

    int LeftSubtreeHeight = GetTreeHeight(RootNode->LeftChild);
    // Calculate height of left subtree

    int RightSubtreeHeight = GetTreeHeight(RootNode->RightChild);
    // Calculate height of right subtree

    if (LeftSubtreeHeight > RightSubtreeHeight)
        return LeftSubtreeHeight + 1;
        // Return left height + 1 if left subtree is taller
    else
        return RightSubtreeHeight + 1;
        // Return right height + 1 if right subtree is taller
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    TreeNode* RootNode = NULL;
    // Create an empty root node


    // ======================================================
    // CATEGORY: Insert Animal Names into Tree
    // Purpose : Build the binary search tree
    // ======================================================

    RootNode = InsertNode(RootNode, "Monkey");
    RootNode = InsertNode(RootNode, "Rat");
    RootNode = InsertNode(RootNode, "Tiger");
    RootNode = InsertNode(RootNode, "Dog");
    RootNode = InsertNode(RootNode, "Cat");
    RootNode = InsertNode(RootNode, "Elephant");
    RootNode = InsertNode(RootNode, "Salmon");
    RootNode = InsertNode(RootNode, "Zebra");
    RootNode = InsertNode(RootNode, "Panda");


    // ======================================================
    // CATEGORY: Display Tree Traversals
    // Purpose : Show preorder, inorder, and postorder output
    // ======================================================

    cout << "Preorder Traversal: ";
    DisplayPreorder(RootNode);
    cout << endl;

    cout << "Inorder Traversal: ";
    DisplayInorder(RootNode);
    cout << endl;

    cout << "Postorder Traversal: ";
    DisplayPostorder(RootNode);
    cout << endl << endl;


    // ======================================================
    // CATEGORY: Display Tree Information
    // Purpose : Show total node count and tree height
    // ======================================================

    cout << "Number of nodes in tree: "
         << CountTotalNodes(RootNode) << endl;
    // Display total number of nodes

    cout << "Height of tree: "
         << GetTreeHeight(RootNode) << endl;
    // Display the height of the tree


    return 0;
    // Indicate successful program termination
}
