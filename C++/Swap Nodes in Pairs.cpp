class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* dummy = new ListNode();

        ListNode* prevNode = dummy;
        ListNode* currNode = head;

        while (currNode && currNode->next){
            prevNode->next = currNode->next;
            currNode->next = prevNode->next->next;
            prevNode->next->next = currNode;

            prevNode = currNode;
            currNode = currNode->next;
        }

        return dummy->next;
        
    }
};