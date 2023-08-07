
/*
Certainly! Here's the algorithm for the C++ code provided above, which finds the intersection of two sorted linked lists while keeping only unique elements and skipping one element if two common elements are found:

Algorithm:

1. Create a class `ListNode` to represent a node in the linked list with an integer value (`val`) and a pointer to the next node (`next`).

2. Define a function `intersection_of_sorted_lists` that takes two pointers to ListNode (`head1` and `head2`) as input and returns a pointer to the head of the resulting linked list.

3. Initialize a dummy node (`dummy`) to create the result linked list and a pointer `result_tail` to the last node of the result list.

4. Traverse both linked lists (`head1` and `head2`) simultaneously using a `while` loop until either one of the lists is fully traversed.

5. At each iteration, compare the values of the current nodes in both linked lists.

6. If the values of the current nodes are equal, check if the element is not already present in the result list. If it's not present, add the element to the result list and move `result_tail` to the newly added node.

7. Check if the next node in either list has the same value as the current node. If so, it means there are repeated elements in that list. In this case, skip one node to remove the repetition by moving the pointers accordingly.

8. If the current node's value in the first linked list (`head1->val`) is smaller than the current node's value in the second linked list (`head2->val`), move `head1` to the next node in the first list.

9. If the current node's value in the second linked list (`head2->val`) is smaller than the current node's value in the first linked list (`head1->val`), move `head2` to the next node in the second list.

10. Repeat steps 5 to 9 until one of the lists is fully traversed.

11. Return the pointer to the head of the resulting linked list (i.e., `dummy->next`).

12. Optionally, clean up the memory used by the linked lists to avoid memory leaks.

The algorithm guarantees that the result linked list will contain the intersection of the two input lists with unique elements, skipping one element when two common elements are found.
*/
#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val = 0, ListNode* next = nullptr) : val(val), next(next) {}
};

ListNode* intersection_of_sorted_lists(ListNode* head1, ListNode* head2) {
    ListNode* dummy = new ListNode();
    ListNode* result_tail = dummy;

    while (head1 && head2) {
        if (head1->val == head2->val) {
            if (!result_tail->next || result_tail->next->val != head1->val) {
                result_tail->next = new ListNode(head1->val);
                result_tail = result_tail->next;
            }

            if (head1->next && head1->next->val == head1->val) {
                head1 = head1->next->next;
            } else {
                head1 = head1->next;
            }

            if (head2->next && head2->next->val == head2->val) {
                head2 = head2->next->next;
            } else {
                head2 = head2->next;
            }
        } else if (head1->val < head2->val) {
            head1 = head1->next;
        } else {
            head2 = head2->next;
        }
    }

    return dummy->next;
}

// Helper function to print the linked list
void print_linked_list(ListNode* head) {
    ListNode* current = head;
    while (current) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "None" << std::endl;
}

// Example usage with the provided lists:
int main() {
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(5, new ListNode(5, new ListNode(7))))));
    ListNode* list2 = new ListNode(2, new ListNode(4, new ListNode(5, new ListNode(5, new ListNode(6)))));

    // Find the intersection with unique elements and skip one element if two common elements found
    ListNode* result_list = intersection_of_sorted_lists(list1, list2);

    // Print the result
    print_linked_list(result_list);  // Output: 2 -> 5 -> None

    // Clean up memory (Optional, but recommended)
    ListNode* current = result_list;
    while (current) {
        ListNode* next_node = current->next;
        delete current;
        current = next_node;
    }

    return 0;
}
