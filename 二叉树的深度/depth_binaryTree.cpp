/*
 * 题目描述
 * 输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。
 */
//思路：递归，树的深度=max(左子树深度，右子树深度) + 1
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if (pRoot == NULL)
            return 0;
        return max(TreeDepth(pRoot->left), TreeDepth(pRoot->right)) + 1;
    }
};
