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

class Solution
{
public:

    int diameterOfBinaryTree(Node* root)
    {
        int diameter = 0;

        height(root, diameter);

        return diameter;
    }

private:

    int height(Node* node, int& diameter)
    {
        // Base case
        if (node == nullptr)
            return 0;

        // Height of left subtree
        int leftHeight = height(node->left, diameter);

        // Height of right subtree
        int rightHeight = height(node->right, diameter);

        // Diameter passing through current node
        diameter = max(diameter, leftHeight + rightHeight);

        // Return height of current node
        return 1 + max(leftHeight, rightHeight);
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

    cout << "Diameter: "
         << obj.diameterOfBinaryTree(root)
         << endl;

    return 0;
}