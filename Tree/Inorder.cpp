#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *left;
    int data;
    Node *right;
    Node(int k)
    {
        data = k;
        left = NULL;
        right = NULL;
    }
};

void Inorder(Node *root)
{
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(15);
    root->right->right = new Node(50);
    root->right->left = new Node(70);
    Inorder(root);
    return 0;
}