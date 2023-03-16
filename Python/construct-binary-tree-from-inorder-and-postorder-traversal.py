# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

## Solution 01  --> O(n^2)
# class Solution:
#     def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
#         if not inorder:
#             return None

#         root = TreeNode(postorder.pop())
#         idx = inorder.index(root.val)    
#         root.right = self.buildTree(inorder[idx + 1:], postorder)
#         root.left = self.buildTree(inorder[:idx], postorder)
#         return root

#Solution 02  --> O(n)
class Solution:
    def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        inorderidx = { v:i for i, v in enumerate(inorder)}

        def helper(l , r):
            if l > r:
                return None

            root = TreeNode(postorder.pop())
            idx = inorderidx[root.val]    
            root.right = helper(idx + 1, r)
            root.left = helper(l, idx - 1)
            return root

        return helper(0 , len(inorder) - 1)  