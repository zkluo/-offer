/*
 * 题目描述
 * 输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
 */
//思路：递归判断当前树，左子树，右子树分别是否满足
class Solution {
public:
    bool Judge(TreeNode* pRoot1, TreeNode* pRoot2) {
        if (pRoot2 == NULL)
            return true;
        if (pRoot1 == NULL)
            return false;
        return pRoot1->val == pRoot2->val && 
                Judge(pRoot1->left, pRoot2->left) &&
                Judge(pRoot1->right, pRoot2->right);
    }
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot1 == NULL || pRoot2 == NULL)
            return false;
         bool res = false;
         if (pRoot1->val == pRoot2->val) 
             res = Judge(pRoot1, pRoot2);   
         if (!res)
             res = HasSubtree(pRoot1->left, pRoot2);
         if (!res) 
             res = HasSubtree(pRoot1->right, pRoot2);
         return res;
    }
};
