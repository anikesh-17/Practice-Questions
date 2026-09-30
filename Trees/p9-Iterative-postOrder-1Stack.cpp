#include <iostream>
#include <vector>
#include <stack>
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

// Iterative Postorder Traversal using 1 Stack
vector<int> postorderTraversal(Node* root)
{
    vector<int> postorder;
    stack<Node*> st;

    Node* current = root;

    while (current != nullptr || !st.empty())
    {
        // Go to the leftmost node
        if (current != nullptr)
        {
            st.push(current);
            current = current->left;
        }
        else
        {
            Node* temp = st.top()->right;

            // If right child doesn't exist
            if (temp == nullptr)
            {
                temp = st.top();
                st.pop();

                postorder.push_back(temp->data);

                // Process nodes whose right subtree is already processed
                while (!st.empty() && temp == st.top()->right)
                {
                    temp = st.top();
                    st.pop();

                    postorder.push_back(temp->data);
                }
            }
            else
            {
                // Move to right subtree
                current = temp;
            }
        }
    }

    return postorder;
}

int main()
{
    // Creating the binary tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(7);

    root->left->left = new Node(3);
    root->left->left->right = new Node(4);
    root->left->left->right->right = new Node(5);
    root->left->left->right->right->right = new Node(6);

    root->right->left = new Node(8);

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