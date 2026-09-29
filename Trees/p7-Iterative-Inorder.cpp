#include <iostream>
#include <vector>
#include <stack>
using namespace std;

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

// Iterative Inorder Traversal
vector<int> inorderTraversal(Node *root)
{
    vector<int> inorder;
    stack<Node *> st;

    Node *current = root;

    while (true)
    {
        // Go as far left as possible
        if (current != nullptr)
        {
            st.push(current);
            current = current->left;
        }
        else
        {
            // If stack is empty, traversal is complete
            if (st.empty())
                break;

            // Get the top node
            current = st.top();
            st.pop();

            // Process the node
            inorder.push_back(current->data);

            // Move to right subtree
            current = current->right;
        }
    }

    return inorder;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = inorderTraversal(root);

    cout << "Inorder Traversal: ";

    for (int value : result)
    {
        cout << value << " ";
    }

    return 0;
}