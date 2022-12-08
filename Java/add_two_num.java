class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2){
    
    ListNode head = new ListNode(0);
    ListNode iterator = head;

    ListNode p1 = l1;
    ListNode p2 = l2;
    boolean carry = false;

    while(p1!= null || p2!= null){

        int sum = 0;

        if(p1 == null){
            sum += p2.val;
            p2 = p2.next;
        }

        else if(p2 == null){
            sum += p1.val;
            p1 = p1.next;
        }

        else{
            sum += p1.val + p2.val;
            p1 = p1.next;
            p2 = p2.next;
        }    

    if(carry){ 
        sum = sum+1;
    }
    
    if(sum >= 10){
        sum %= 10;
        carry = true;
    }else{
        carry = false;
    }

    ListNode newNode = new ListNode(sum);
    iterator.next = newNode;
    iterator = iterator.next; 
    }

    if(carry){ 
        iterator next = new ListNode(1);
    }

    return head.next;

    }
}   

    