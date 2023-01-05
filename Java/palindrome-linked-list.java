class Solution {
    public ListNode reverse(ListNode head){
        
        ListNode prev = null;
        ListNode curr = head;
        ListNode next = curr.next;
        
        while(curr != null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    public boolean isPalindrome(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;
        
        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        slow= reverse(slow);
        while(slow != null){
            if(slow.val != head.val){
                return false;
            }
            head = head.next;
            slow = slow.next;
        }
        return true;
    }
}
