#include <iostream>
using namespace std;
struct node {
    int data;
    struct node *next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to partition the linked list based on a pivot node
node* partition(node* head, node* tail) {
    node* pivot = head; // Selecting the pivot node as the head of the sublist
    node* curr = head, *nex = curr->next; // Initialize pointers to traverse the sublist

    // Iterate through the sublist until we reach the tail
    while (nex != tail) {
        if (pivot->data > nex->data) {
            // If the current node's data is less than the pivot node's data,
            // move the current node forward and swap its data with the next node's data
            swap(curr->next->data, nex->data);
            curr = curr->next;
        }
        nex = nex->next; // Move to the next node
    }

    // Swap the pivot node's data with the current node's data to place the pivot in its correct position
    swap(pivot->data, curr->data);
    return curr; // Return the current node, which is the new position of the pivot node
}

// Function to perform quicksort on a sublist of the linked list
void sort(node* head, node* tail) {
    if (head == NULL || head == tail) return; // Base case: sublist is empty or contains a single node

    // Partition the sublist around a pivot node and get the new position of the pivot
    node* p = partition(head, tail);

    // Get the head of the second sublist (greater than the pivot node)
    node* sHead = p->next;

    // Recursively apply quicksort to the two sublists
    sort(head, p); // Quicksort the sublist before the pivot
    sort(sHead, tail); // Quicksort the sublist after the pivot
}

// Function to perform quicksort on the entire linked list
void quickSort(struct node** headRef) {
    node* head = *headRef; // Get the head of the linked list
    sort(head, NULL); // Start quicksort with the entire linked list
}

void displayLinkedList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create the linked list
    node* head = new node(10);
    head->next = new node(5);
    head->next->next = new node(8);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(7);

    cout << "Linked List before sorting: ";
    displayLinkedList(head);

    quickSort(&head);

    cout << "Linked List after sorting: ";
    displayLinkedList(head);

    // Free memory
    node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
