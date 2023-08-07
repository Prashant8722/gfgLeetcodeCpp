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
//Space optimized preorder traversal=>only right child go to stack
void spaceOptimizedPreorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL ||s.empty() == false)
    {
        while(curr != NULL){
            cout << curr->data <<" ";
            if(curr->right != NULL)
                s.push(curr->right);
            curr = curr->left;
        }
        if(s.empty() == false)  {
            curr = s.top();
            s.pop();
        }
    }
}

void Preorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    s.push(root);
    while (s.empty() == false)
    {
        Node *curr = s.top();
        cout << curr->data << " ";
        s.pop();
        if (curr->right != NULL)
            s.push(curr->right);
        if (curr->left != NULL)
            s.push(curr->left);
    }
    return;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->right->left = new Node(60);
    root->right->right->right = new Node(70);
    spaceOptimizedPreorder(root);
    return 0;
}