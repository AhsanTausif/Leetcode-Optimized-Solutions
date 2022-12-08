class Node:
    
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    
    def __init__(self):
        self.head = None
        
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def printLL(self):
        temp = self.head
        while(temp):
            print(temp.data, end ='')
            temp = temp.next    
        
    def deleteDuplicates(self, head):
        if head == None:
            return head
        
        curr = head
        
        while curr.next != None:
            if curr.val == curr.next.val:
                temp = curr.next 
                curr.next = curr.next.next 
                del temp
                
            else:
                curr = curr.next 
        
        return head                       