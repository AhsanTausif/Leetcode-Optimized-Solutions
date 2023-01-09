class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if not root: 
            return [] 

        res = []
        stack = []

        stack.append(root)

        while stack:
            cur = stack.pop()
            res.append(cur.val)
            if cur.right:
                stack.append(cur.right)
            if cur.left:
                stack.append(cur.left)
        return res