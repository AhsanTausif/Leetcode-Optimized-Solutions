class Solution {
public:
bool isCompleteTree(TreeNode *root) {
    queue<TreeNode *> q;
    q.push(root);
    bool hasChild = true;
    while (!q.empty()) {
      TreeNode *ele = q.front();
      q.pop();
      if (ele->left != NULL && !hasChild)
        return false;
      if (ele->left == NULL)
        hasChild = false;
      else
        q.push(ele->left);
      if (ele->right != NULL && !hasChild)
        return false;
      if (ele->right == NULL)
        hasChild = false;
      else
        q.push(ele->right);
    }
    return true;
  }
};