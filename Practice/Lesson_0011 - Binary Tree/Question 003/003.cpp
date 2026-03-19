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
    // Store the value of the node

    TreeNode* LeftChild;
    // Pointer to the left child node

    TreeNode* RightChild;
    // Pointer to the right child node
};


// ==========================================================
// CATEGORY: Create New Node Function
// Purpose : Create and initialize a new tree node
// ==========================================================

TreeNode* CreateNewNode(string NewAnimalName)
{
    TreeNode* NewNode = new TreeNode;
    // Dynamically create a new tree node

    NewNode->AnimalName = NewAnimalName;
    // Store the given animal name in the node

    NewNode->LeftChild = NULL;
    // Initialize left child as NULL

    NewNode->RightChild = NULL;
    // Initialize right child as NULL

    return NewNode;
    // Return the address of the new node
}


// ==========================================================
// CATEGORY: Insert Function
// Purpose : Insert a new value into the binary search tree
// ==========================================================

TreeNode* InsertNode(TreeNode* RootNode, string NewAnimalName)
{
    if (RootNode == NULL)
    {
        // If current position is empty, create and return a new node

        return CreateNewNode(NewAnimalName);
    }

    if (NewAnimalName < RootNode->AnimalName)
    {
        // If the new value is alphabetically smaller than current node

        RootNode->LeftChild = InsertNode(RootNode->LeftChild, NewAnimalName);
        // Insert into the left subtree
    }
    else if (NewAnimalName > RootNode->AnimalName)
    {
        // If the new value is alphabetically greater than current node

        RootNode->RightChild = InsertNode(RootNode->RightChild, NewAnimalName);
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
        // Continue only if current node exists

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
        // Continue only if current node exists

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
        // Continue only if current node exists

        DisplayPostorder(RootNode->LeftChild);
        // Traverse the left subtree first

        DisplayPostorder(RootNode->RightChild);
        // Traverse the right subtree second

        cout << RootNode->AnimalName << " ";
        // Display current root node last
    }
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Construct the binary tree and display traversals
// ==========================================================

int main()
{
    TreeNode* RootNode = NULL;
    // Initialize the root of the binary tree as empty

    RootNode = InsertNode(RootNode, "Monkey");
    // Insert Monkey into the binary search tree

    RootNode = InsertNode(RootNode, "Rat");
    // Insert Rat into the binary search tree

    RootNode = InsertNode(RootNode, "Tiger");
    // Insert Tiger into the binary search tree

    RootNode = InsertNode(RootNode, "Dog");
    // Insert Dog into the binary search tree

    RootNode = InsertNode(RootNode, "Cat");
    // Insert Cat into the binary search tree

    RootNode = InsertNode(RootNode, "Elephant");
    // Insert Elephant into the binary search tree

    RootNode = InsertNode(RootNode, "Salmon");
    // Insert Salmon into the binary search tree

    RootNode = InsertNode(RootNode, "Zebra");
    // Insert Zebra into the binary search tree

    RootNode = InsertNode(RootNode, "Panda");
    // Insert Panda into the binary search tree


    cout << "Preorder Traversal: ";
    // Display heading for preorder traversal

    DisplayPreorder(RootNode);
    // Print preorder result

    cout << endl;


    cout << "Inorder Traversal: ";
    // Display heading for inorder traversal

    DisplayInorder(RootNode);
    // Print inorder result

    cout << endl;


    cout << "Postorder Traversal: ";
    // Display heading for postorder traversal

    DisplayPostorder(RootNode);
    // Print postorder result

    cout << endl;

    return 0;
    // Indicate successful program termination
}
