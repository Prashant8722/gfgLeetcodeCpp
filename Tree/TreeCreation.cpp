#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left;
    int key;
    Node *right;
    Node(int k)
    {
        key = k;
        left =NULL;
        right = NULL;
    }
};
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
return 0;
}