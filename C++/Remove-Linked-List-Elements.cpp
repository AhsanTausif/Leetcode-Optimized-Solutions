class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr != NULL){
             ListNode* next = curr->next;

             if(curr->val == val){
                 prev->next = next;
             } else {
                 prev = curr;
             }
             curr = next;
        }
        
        return dummy->next;
    }
};