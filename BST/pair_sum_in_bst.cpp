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
        left = NULL;
        right = NULL;
    }
};

    vector<int>v;
    void inorder(Node *root)
    {
        if(root== NULL) return;
        else{
        inorder(root ->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    }
    int isPairPresent(struct Node *root, int target)
    {
        inorder(root);
        for(int i = 0 , j = v.size()- 1 ; i < j ; )
            {
                if((v[i] + v[j]) == target)   return 1;
                else if((v[i] + v[j]) >  target) j--;
                else
                    i++;
            }
            return 0;
    }
int main()
{
    Node *root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(30);
    root->left->left = new Node(1);
    root->left->right = new Node(6);
    root->right->right = new Node(36);
    root->right->left = new Node(20);
    inorder(root);
    for(int i : v)
        cout<<i <<" ";
    cout<<isPairPresent(root,11)<<endl;
    return 0;
}