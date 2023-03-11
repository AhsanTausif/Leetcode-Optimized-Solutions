class Solution:
    def helper(self, arr):
        if arr:
            m       =  len(arr)//2
            root    =  TreeNode(arr[m])
            root.left  = self.helper(arr[:m])
            root.right = self.helper(arr[m+1:])
            return root
    def sortedListToBST(self, head):
        arr, n = [], head
        while n:
            arr.append(n.val)
            n = n.next
        return self.helper(arr)