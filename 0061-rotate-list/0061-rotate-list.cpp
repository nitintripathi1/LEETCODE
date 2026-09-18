class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL || k == 0) return head;
        int count = 0;
        ListNode* z = head;
        while(z != NULL){
            count++;
            z = z-> next;
        }
        if(k > count) k = k % count;
        for(int i = 0; i < k; i++){
            ListNode* temp = head;
            ListNode* a = NULL;
            while(temp -> next != NULL){
                a = temp;
                temp = temp -> next;
            }
            temp -> next = head;
            a -> next = NULL;
            head = temp;
        }
        return head;
    }
};