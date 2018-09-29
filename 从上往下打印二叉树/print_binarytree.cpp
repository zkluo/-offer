/*
 * 题目描述
 * 从上往下打印出二叉树的每个节点，同层节点从左至右打印
 */
//思路：bfs
class Solution {
public:
    void bfs(queue<TreeNode*> &q, vector<int> &res) {
        if (q.empty())
            return;
        int size = q.size();
        while (size > 0) {
            TreeNode* f = q.front();
            res.push_back(f->val);
            q.pop();
            if (f->left != NULL)
                q.push(f->left);
            if (f->right != NULL)
                q.push(f->right);
            size--;
        }
        bfs(q, res);
    }
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> q;
        if (root == NULL)
            return res;
        q.push(root);
        bfs(q, res);
        return res;
    }
};
