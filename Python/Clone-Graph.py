## Depth First Search Approach
class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        hashMap = {}

        def clone(node):
            if node in hashMap:
                return hashMap[node]

            copy = Node(node.val)
            hashMap[node] = copy

            for nei in node.neighbors:
                copy.neighbors.append(clone(nei))
            return copy

        return clone(node) if node else None      