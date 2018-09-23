/*
 * 题目描述
 * 操作给定的二叉树，将其变换为源二叉树的镜像
 */
//思路：递归
class Solution {
public:
    TreeNode* reverse(TreeNode *pRoot) {
        if (pRoot == NULL)
            return pRoot;
        TreeNode *pleft = reverse(pRoot->left);
        TreeNode *pright = reverse(pRoot->right);
        pRoot->left = pright;
        pRoot->right = pleft;
        return pRoot;
    }
    void Mirror(TreeNode *pRoot) {
        if (pRoot == NULL)
            return;
        reverse(pRoot);
    }
};
