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

vector<vector<int>> allTraversals(Node* root)
{
    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;

    if (root == nullptr)
        return {preorder, inorder, postorder};

    // pair<Node*, int>
    // int represents the state:
    // 1 -> Preorder
    // 2 -> Inorder
    // 3 -> Postorder

    stack<pair<Node*, int>> st;

    st.push({root, 1});

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();

        Node* node = it.first;
        int state = it.second;

        // Preorder
        if (state == 1)
        {
            preorder.push_back(node->data);

            // Change state to 2
            it.second++;
            st.push(it);

            // Process left subtree
            if (node->left != nullptr)
            {
                st.push({node->left, 1});
            }
        }

        // Inorder
        else if (state == 2)
        {
            inorder.push_back(node->data);

            // Change state to 3
            it.second++;
            st.push(it);

            // Process right subtree
            if (node->right != nullptr)
            {
                st.push({node->right, 1});
            }
        }

        // Postorder
        else
        {
            postorder.push_back(node->data);
        }
    }

    return {preorder, inorder, postorder};
}

int main()
{
    /*
            1
           / \
          2   3
         / \ / \
        4  5 6  7
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> result = allTraversals(root);

    cout << "Preorder: ";
    for (int x : result[0])
        cout << x << " ";

    cout << "\nInorder: ";
    for (int x : result[1])
        cout << x << " ";

    cout << "\nPostorder: ";
    for (int x : result[2])
        cout << x << " ";

    return 0;
}