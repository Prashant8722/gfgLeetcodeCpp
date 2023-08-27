#include <bits/stdc++.h>
using namespace std;
/*
Given a doubly linked list containing n nodes, where each node is at most k away from its target position in the list. The problem is to sort the given doubly linked list. 
For example, let us consider k is 2, a node at position 7 in the sorted doubly linked list, can be at positions 5, 6, 7, 8, 9 in the given doubly linked list.
*/
/*Time Complexity: O(n*log k)
Auxiliary Space: O(k)*/
struct node
{
    int data;
    struct node *prev;
    struct node *next;
    node(int ele)
    {
        data = ele;
        prev = nullptr;
        next = nullptr;
    }
};
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
struct compare{
bool operator()(struct node* a , struct node *b){
    return a->data > b->data;
}
};
struct node* ksorted(struct node *head, int k)
{
    //min heap contains data datatype node structure;
    priority_queue<node* , vector<node*> , compare>pq;

    for(int i = 0 ; head != nullptr && i <= k ; i++){
        pq.push(head);
        head = head->next;
    }

    struct node* newhead = nullptr , *curr;
    while(!pq.empty()){
        if(newhead == nullptr){
            newhead = pq.top();
            curr = newhead;
            newhead->prev = NULL;
        }
        else{
            curr->next = pq.top();
            pq.top() -> prev = curr;
            curr = pq.top();
        }
        pq.pop();
        if(head != nullptr){
            pq.push(head);
            head = head->next;
        }

    }
    curr->next = nullptr;
    return newhead;
    }
int main()
{
    // cout<<"Enter ther value of k:"<<endl;
    int k = 2;
    // cin>>k;
    struct node *head = new node(3);
    head->next = new node(6);
    head->next->next = new node(2);
    head->next->next->next = new node(12);
    head->next->next->next->next = new node(56);
    head->next->next->next->next->next = new node(8);
    cout << "Before Sorting DLL:" << endl;
    display(head);

    head = ksorted(head, k);
    cout << "After Sorting DLL:" << endl;

    display(head);

    return 0;
}