#include <iostream>
#include <algorithm>
#include <cmath>
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

class Solution
{
public:

    // Returns -1 if tree is not balanced
    // Otherwise returns the height of the tree
    int dfsHeight(Node* root)
    {
        // Base case
        if (root == nullptr)
            return 0;

        // Calculate left subtree height
        int leftHeight = dfsHeight(root->left);

        // If left subtree is not balanced
        if (leftHeight == -1)
            return -1;

        // Calculate right subtree height
        int rightHeight = dfsHeight(root->right);

        // If right subtree is not balanced
        if (rightHeight == -1)
            return -1;

        // Check balance condition
        if (abs(leftHeight - rightHeight) > 1)
            return -1;

        // Return height
        return 1 + max(leftHeight, rightHeight);
    }

    bool isBalanced(Node* root)
    {
        return dfsHeight(root) != -1;
    }
};

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

    Solution obj;

    if (obj.isBalanced(root))
        cout << "The tree is balanced." << endl;
    else
        cout << "The tree is not balanced." << endl;

    return 0;
}