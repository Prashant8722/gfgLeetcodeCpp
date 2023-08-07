struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
ListNode* insertionSortList(ListNode* head) {
        ListNode * dummy = new ListNode();
        ListNode *curr = head;
        if(!head -> next) return head;

        while ( curr != NULL )
        {
             ListNode *prev = dummy;
             while (prev->next != NULL && prev->next->val <= curr->val) {
                prev = prev->next;
            }
            ListNode *next = curr->next;
            curr->next = prev->next;
            prev->next = curr;

            curr = next;
        }
        return dummy->next;
    }