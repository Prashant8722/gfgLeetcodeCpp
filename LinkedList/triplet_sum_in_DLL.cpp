using namespace std;
#include<bits/stdc++.h>
/*
Given a sorted doubly linked list of distinct nodes(no two nodes have the same data) and a value x. Count triplets in the list that sum up to a given value x.
*/
struct node {
    int data;
    struct node* prev;
    struct node *next;

    node(int x) {
        data = x;
        prev = nullptr;
        next = NULL;
    }
};
int twoSum(node* head ,int k){
    node *left = head;
    node* right = head;

    vector<pair<int ,int>>v;

    while(right->next  != nullptr){
        right = right->next;
    }
    int count = 0;
    
    while(left != nullptr && right != nullptr && left != right && left->prev != right ){
        int sum = left -> data + right -> data;
        if(sum == k){
            count++;
            v.push_back(make_pair(left ->data , right->data));
            left = left ->next;
            right = right->prev;
        }
        else if(sum < k) left = left ->next;
        else right = right ->prev; 
    }
    for(auto ks : v ){
        cout<<"["<< ks.first <<"," <<ks.second <<"]";
    }
    cout<<endl;
    return count;
}
int threeSumLL(node* head , int x){
    int total = 0;
    if(head == nullptr || head->next == nullptr || head->next->next == nullptr )
        return -1;
    else{
        node* curr = head;
        while( curr != nullptr && curr->next != nullptr && curr->next->next != nullptr){
            int diff = x - curr -> data;
            cout<<curr->data;
            total += twoSum(curr->next , diff);
            curr = curr->next;
            cout<<endl;
        }
    }
    return total;
}
// Display the data of doubly linked list
void display(struct node *head)
{
    node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    // cout<<"Enter ther value of k:"<<endl;
    int k = 15;
    // cin>>k;
    node* head = new node(1);
    node* nodes2 = new node(2);
    node* nodes4 = new node(4);
    node* nodes5 = new node(5);
    node* nodes6 = new node(6);
    node* nodes8 = new node(8);
    node* nodes9 = new node(9);

    head->next = nodes2;
    nodes2->prev = head;
    nodes2->next = nodes4;
    nodes4->prev = nodes2;
    nodes4->next = nodes5;
    nodes5->prev = nodes4;
    nodes5->next = nodes6;
    nodes6->prev = nodes5;
    nodes6->next = nodes8;
    nodes8->prev = nodes6;
    nodes8->next = nodes9;
    nodes9->prev = nodes8;

    cout << "Before counting tiplet DLL:" << endl;
    display(head);

    cout << "Total triplet: " << threeSumLL(head, k)<<endl;             //Answer 5
    cout << "After counting DLL:" << endl;

    display(head);

    return 0;
}
