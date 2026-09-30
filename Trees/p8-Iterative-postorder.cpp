#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Structure of Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Iterative Postorder Traversal using 2 Stacks
vector<int> postorderTraversal(Node *root)
{
    vector<int> postorder;

    if (root == nullptr)
        return postorder;

    stack<Node *> st1;
    stack<Node *> st2;

    // Push root into first stack
    st1.push(root);

    while (!st1.empty())
    {
        Node *current = st1.top();
        st1.pop();

        // Push current node into second stack
        st2.push(current);

        // Push left child
        if (current->left != nullptr)
            st1.push(current->left);

        // Push right child
        if (current->right != nullptr)
            st1.push(current->right);
    }

    // Pop from second stack to get postorder
    while (!st2.empty())
    {
        postorder.push_back(st2.top()->data);
        st2.pop();
    }

    return postorder;
}

int main()
{
    // Creating the binary tree
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Get postorder traversal
    vector<int> result = postorderTraversal(root);

    // Print result
    cout << "Postorder Traversal: ";

    for (int value : result)
    {
        cout << value << " ";
    }

    return 0;
}