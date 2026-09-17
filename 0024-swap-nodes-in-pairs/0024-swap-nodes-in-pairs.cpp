class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* a = head;
        ListNode* r = a->next;
        ListNode* p = NULL;

        while (a != NULL && a->next != NULL) {
            ListNode* b = a->next;
            a->next = b->next;
            b->next = a;
            if (p != NULL) {
                p -> next = b;
            }
            p = a;
            a = a->next;
        }
        return r;
    }
};