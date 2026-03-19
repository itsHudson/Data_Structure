// ==========================================================
// CATEGORY: Header Files
// ==========================================================

#include <iostream>
#include <string>

using namespace std;


// ==========================================================
// CATEGORY: Tree Node Structure
// ==========================================================

struct TreeNode
{
    string AnimalName;

    TreeNode* LeftChild;
    TreeNode* RightChild;
};


// ==========================================================
// CATEGORY: Create New Node
// ==========================================================

TreeNode* CreateNewNode(string NewAnimalName)
{
    TreeNode* NewNode = new TreeNode;

    NewNode->AnimalName = NewAnimalName;

    NewNode->LeftChild = NULL;
    NewNode->RightChild = NULL;

    return NewNode;
}


// ==========================================================
// CATEGORY: Insert Node (Binary Search Tree)
// ==========================================================

TreeNode* InsertNode(TreeNode* RootNode, string NewAnimalName)
{
    if (RootNode == NULL)
    {
        return CreateNewNode(NewAnimalName);
    }

    if (NewAnimalName < RootNode->AnimalName)
    {
        RootNode->LeftChild =
            InsertNode(RootNode->LeftChild, NewAnimalName);
    }
    else if (NewAnimalName > RootNode->AnimalName)
    {
        RootNode->RightChild =
            InsertNode(RootNode->RightChild, NewAnimalName);
    }

    return RootNode;
}


// ==========================================================
// CATEGORY: Preorder Traversal
// ==========================================================

void DisplayPreorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        cout << RootNode->AnimalName << " ";

        DisplayPreorder(RootNode->LeftChild);

        DisplayPreorder(RootNode->RightChild);
    }
}


// ==========================================================
// CATEGORY: Inorder Traversal
// ==========================================================

void DisplayInorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        DisplayInorder(RootNode->LeftChild);

        cout << RootNode->AnimalName << " ";

        DisplayInorder(RootNode->RightChild);
    }
}


// ==========================================================
// CATEGORY: Postorder Traversal
// ==========================================================

void DisplayPostorder(TreeNode* RootNode)
{
    if (RootNode != NULL)
    {
        DisplayPostorder(RootNode->LeftChild);

        DisplayPostorder(RootNode->RightChild);

        cout << RootNode->AnimalName << " ";
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
    }

    return 1 +
           CountTotalNodes(RootNode->LeftChild) +
           CountTotalNodes(RootNode->RightChild);
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

    int LeftHeight = GetTreeHeight(RootNode->LeftChild);
    int RightHeight = GetTreeHeight(RootNode->RightChild);

    if (LeftHeight > RightHeight)
        return LeftHeight + 1;
    else
        return RightHeight + 1;
}


// ==========================================================
// CATEGORY: Main Function
// ==========================================================

int main()
{
    TreeNode* RootNode = NULL;

    RootNode = InsertNode(RootNode, "Monkey");
    RootNode = InsertNode(RootNode, "Rat");
    RootNode = InsertNode(RootNode, "Tiger");
    RootNode = InsertNode(RootNode, "Dog");
    RootNode = InsertNode(RootNode, "Cat");
    RootNode = InsertNode(RootNode, "Elephant");
    RootNode = InsertNode(RootNode, "Salmon");
    RootNode = InsertNode(RootNode, "Zebra");
    RootNode = InsertNode(RootNode, "Panda");


    cout << "Preorder Traversal: ";
    DisplayPreorder(RootNode);
    cout << endl;

    cout << "Inorder Traversal: ";
    DisplayInorder(RootNode);
    cout << endl;

    cout << "Postorder Traversal: ";
    DisplayPostorder(RootNode);
    cout << endl << endl;


    cout << "Number of nodes in tree: "
         << CountTotalNodes(RootNode) << endl;

    cout << "Height of tree: "
         << GetTreeHeight(RootNode) << endl;

    return 0;
}
