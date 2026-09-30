#include <iostream>
#include <algorithm>
using namespace std;

// Structure of Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Find Maximum Depth / Height of Binary Tree
int maxDepth(Node* root)
{
    // Base case
    if (root == nullptr)
        return 0;

    // Find height of left subtree
    int leftHeight = maxDepth(root->left);

    // Find height of right subtree
    int rightHeight = maxDepth(root->right);

    // Current node adds 1
    return 1 + max(leftHeight, rightHeight);
}

int main()
{
    /*
            1
           / \
          2   3
         / \
        4   5
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Maximum Depth: " << maxDepth(root) << endl;

    return 0;
}