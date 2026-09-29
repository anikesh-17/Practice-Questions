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

// Iterative Preorder Traversal
vector<int> preorderTraversal(Node *root)
{
    vector<int> preorder;

    // If tree is empty
    if (root == nullptr)
        return preorder;

    // Stack for iterative traversal
    stack<Node *> st;
    st.push(root);

    while (!st.empty())
    {
        // Get the top node
        Node *current = st.top();
        st.pop();

        // Process root
        preorder.push_back(current->data);

        // Push right first
        if (current->right != nullptr)
            st.push(current->right);

        // Push left second
        if (current->left != nullptr)
            st.push(current->left);
    }

    return preorder;
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

    vector<int> result = preorderTraversal(root);

    cout << "Preorder Traversal: ";

    for (int value : result)
    {
        cout << value << " ";
    }

    return 0;
}