class Solution {
    int len = 0;
    ListNode* headNode;
public:
    Solution(ListNode* head) {
        headNode = head;
        ListNode* temp = headNode;
        while(temp != NULL){
            len += 1;
            temp = temp->next;
        }
    }
    
    int getRandom() {
        int rand_index = rand() % len;
        ListNode* temp = headNode;
        for(int i = 0; i < rand_index; i++){
            temp = temp->next;
        }
        return temp->val;
    }
};