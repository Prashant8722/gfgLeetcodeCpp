#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left;
    int data;
    Node *right;
    Node(int k)
    {
        data = k;
        left =NULL;
        right = NULL;
    }
};
int SumofLeafNodes(Node* root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return root->data;
        }
        return SumofLeafNodes(root->left)+SumofLeafNodes(root->right);
    }
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(15);
    root->right->right = new Node(50);
    root->right->left = new Node(70);
    cout<<SumofLeafNodes(root);
return 0;
}