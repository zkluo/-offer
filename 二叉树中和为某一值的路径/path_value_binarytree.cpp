/*
 * 题目描述
 * 输入一颗二叉树的跟节点和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。(注意: 在返回值的list中，数组长度大的数组靠前)
 */
//思路：dfs
bool cmp(vector<int> &a, vector<int> &b) {
    return a.size() > b.size();
}
class Solution {
public:
    void dfs(vector<vector<int> > &res, TreeNode* root, vector<int> &path, int expectNumber, int curNumber) {
        path.push_back(root->val);
        curNumber += root->val;
        if (curNumber == expectNumber && !root->left && !root->right)
            res.push_back(path);
        if (root->left)
            dfs(res, root->left, path, expectNumber, curNumber);
        if (root->right)
            dfs(res, root->right, path, expectNumber, curNumber);
        //curNumber -= root->val;
        path.pop_back();
    }
    vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
        vector<vector<int> > res;
        if (root == NULL)
            return res;
        vector<int> path; 
        dfs(res, root, path, expectNumber, 0);
        sort(res.begin(), res.end(), cmp);
        return res;
    }
};
