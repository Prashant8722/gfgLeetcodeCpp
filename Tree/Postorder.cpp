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
//Incomplete function and incorrect also
void Postorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL || s.empty() == false)
    {
        if (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            Node *temp = s.top()->right;
            if (temp == NULL)
            {
                temp = s.top();
                s.pop();
                if(temp != NULL)
                    cout << temp->data << " ";
                while (s.empty() == false && temp == s.top()->right)
                {
                    temp = s.top();
                    s.pop();
                    if(temp != NULL)
                        cout << temp->data << " ";
                }
            }
            else
            {
                curr = temp;
            }
        }
    }
}
    void TwoStackPostOrder(Node * root)
    {
        stack<Node *> s1;
        stack<Node *> s2;
        s1.push(root);
        while (!s1.empty())
        {
            root = s1.top();
            s1.pop();
            s2.push(root);
            if (root->left != NULL)
                s1.push(root->left);
            if (root->right != NULL)
                s1.push(root->right);
        }
        while (!s2.empty())
        {
            root = s2.top();
            s2.pop();
            cout << root->data << " ";
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
        TwoStackPostOrder(root);
        cout<<endl;
        Postorder(root);
        return 0;
    }