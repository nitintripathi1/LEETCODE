class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
          if (n == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode*  a = head;
        for(int i = 0; i < count - n - 1; i++){
            a = a -> next;
        }
        ListNode* b = a -> next;
        a -> next = b ->  next;
        delete b;
        

        return head;
    }
};