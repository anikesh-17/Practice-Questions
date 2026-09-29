#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> ans;

    if (root == nullptr)
        return ans;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();

            // Add left child to queue
            if (node->left != nullptr)
                q.push(node->left);

            // Add right child to queue
            if (node->right != nullptr)
                q.push(node->right);

            // Add current node to current level
            level.push_back(node->data);
        }

        ans.push_back(level);
    }

    return ans;
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

    vector<vector<int>> result = levelOrder(root);

    for (vector<int> level : result)
    {
        for (int value : level)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}