#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void splitList(Node* head, Node** head1_ref, Node** head2_ref) {
    if (head == nullptr) {
        return;
    }

    Node* slow = head;
    Node* fast = head->next;

    while (fast != head && fast->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast == head) {
        // Odd number of nodes
        Node* h2 = slow->next;
        slow->next = head;
        Node* prev = h2;
        while (prev->next != head)
            prev = prev->next;
        prev->next = h2;

        *head1_ref = head;
        *head2_ref = h2;
    } else {
        // Even number of nodes
        Node* h2 = slow->next;
        slow->next = head;
        fast->next = h2;

        *head1_ref = head;
        *head2_ref = h2;
    }
}

void displayCircularLinkedList(Node* head) {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    do {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    std::cout << std::endl;
}

int main() {
    // Create a circular linked list with 6 nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next = head; // Make it circular

    std::cout << "Original Circular Linked List: ";
    displayCircularLinkedList(head);

    Node* head1 = nullptr;
    Node* head2 = nullptr;

    splitList(head, &head1, &head2);

    std::cout << "Circular Linked List 1: ";
    displayCircularLinkedList(head1);

    std::cout << "Circular Linked List 2: ";
    displayCircularLinkedList(head2);

    // Free memory
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
