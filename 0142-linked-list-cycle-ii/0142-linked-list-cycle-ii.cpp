class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                ListNode* x = head;
                while(slow != x) {
                    
                    x = x-> next;
                    slow = slow -> next;
                }
                return x;
            } 
        }
        return NULL;
    }
};