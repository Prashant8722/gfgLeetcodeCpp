// Partition function for quicksort
// node* partition(node* head, node* last) {
//     if (head == nullptr || head == last) return head;

//     node* pivot = head;
//     node* i = head;
//     node* j = head->next;

//     while (j != last->next) {
//         if (j->data <= pivot->data) {
//             i = i->next;
//             swap(i->data, j->data);
//         }
//         j = j->next;
//     }

//     swap(i->data, pivot->data);
//     return i;
// }