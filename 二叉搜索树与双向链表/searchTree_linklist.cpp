/*
/*
 * 题目描述
 * 输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，只能调整树中结点指针的指向。
 */
//思路：递归
class Solution {
public:
    TreeNode* myConvert(TreeNode* pRootOfTree) {
        if (pRootOfTree == NULL) 
            return NULL;
        TreeNode *l = myConvert(pRootOfTree->left);
        TreeNode *r = myConvert(pRootOfTree->right);
        while (l != NULL && l->right != NULL) {
            l = l->right;
        }
        while (r != NULL && r->left != NULL) {
            r = r->left;
        }
        if (l != NULL)
            l->right = pRootOfTree;
        pRootOfTree->left = l;
        if (r != NULL)
            r->left = pRootOfTree;
        pRootOfTree->right = r;
        return pRootOfTree;
    }
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        TreeNode *res = myConvert(pRootOfTree);
        while (res != NULL && res->left != NULL) {
            res = res->left;
        }
        return res;
    }
};
