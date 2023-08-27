#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Node* insertNode(Node* head, int value) {
//     Node* newNode = new Node(value);

//     if (head == nullptr) {
//         head = newNode;
//         head->next = head; // Point to itself in case of only one node
//     } else {
//         Node* temp = head;
//         while (temp->next != head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = head; // Make the new node the new last node
//     }

//     return head;
// }

void displayCircularList(Node* head) {
    if (head == nullptr) {
        cout << "Empty circular linked list." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
/* Function to reverse the linked list */
 Node* reverse(struct Node* head_ref)
{
    Node* curr = head_ref;
    Node* prev = nullptr;
    
    while(curr != nullptr){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        if(curr == head_ref) break;
    }
    // Update last node's next to point to the new head
    head_ref->next = prev;

     // Update the head_ref pointer to point to the new head
    head_ref = prev;
    return head_ref;
}

int main() {
    // Node* head = nullptr;

    // // Insert values into the circular linked list
    // head = insertNode(head, 1);
    // head = insertNode(head, 2);
    // head = insertNode(head, 4);
    // head = insertNode(head, 5);
    // head = insertNode(head, 6);
    // head = insertNode(head, 8);
    // head = insertNode(head, 9);

    Node* head = new Node(10);
    head-> next = new Node(7);
    head->next->next = new Node(4);
    head->next->next->next = new Node(6);
    head->next->next->next->next = head;

    cout << "Circular Linked List: ";
    displayCircularList(head);

    head = reverse(head);

 cout << "Reversed Circular Linked List: ";
    displayCircularList(head);

cout<<"Done LL"<<endl;
 
    return 0;
}
