#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void displayBackward() {
        Node* current = tail;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

//    Node* reverseByN(Node* head, int k)
// {
//     if (!head)
//         return NULL;
//     head->prev = NULL;
//     Node *temp, *curr = head, *newHead;
//     int count = 0;
//     while (curr != NULL && count < k) {
//         newHead = curr;
//         temp = curr->prev;
//         curr->prev = curr->next;
//         curr->next = temp;
//         curr = curr->prev;
//         count++;
//     }
//     // checking if the reversed LinkedList size is
//     // equal to K or not
//     // if it is not equal to k that means we have reversed
//     // the last set of size K and we don't need to call the
//     // recursive function
//     if (count >= k) {
//         Node* rest = reverseByN(curr, k);
//         head->next = rest;
//         if (rest != NULL)
//             // it is required for prev link otherwise u wont
//             // be backtrack list due to broken links
//             rest->prev = head;
//     }
//     return newHead;
// }
void reverseByN(int N) {
    if (head == nullptr || N <= 1) {
        return;
    }

    Node* current = head;
    Node* prevGroupTail = nullptr;

    while (current != nullptr) {
        Node* groupHead = current;
        Node* prev = nullptr;
        Node* nextGroupHead = nullptr;

        int count = 0;
        while (current != nullptr && count < N) {
            nextGroupHead = current->next;
            current->next = prev;
            current->prev = nextGroupHead; // Set the backward link correctly
            prev = current;
            current = nextGroupHead;
            count++;
        }

        if (prevGroupTail != nullptr) {
            prevGroupTail->next = prev;
        } else {
            head = prev;
        }

        if (current != nullptr) {
            current->prev = prevGroupTail; // Set the backward link for the next group
        }

        prevGroupTail = groupHead;
    }

    // Update the tail of the list
    tail = prevGroupTail;
}
};

int main() {
    DoublyLinkedList dll;

    // Insert four nodes into the doubly linked list
    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);
    dll.insertEnd(40);

    // Display the doubly linked list in both forward and backward directions
    cout << "Doubly Linked List (Forward): ";
    dll.displayForward();

    cout << "Doubly Linked List (Backward): ";
    dll.displayBackward();

     // Reverse the doubly linked list in groups of 2 nodes
    dll.reverseByN(2);

    std::cout << "Doubly Linked List after reversal (Forward): ";
    dll.displayForward();

    std::cout << "Doubly Linked List after reversal (Backward): ";
    dll.displayBackward();
    return 0;
}
