/**
 * 题目描述
 * 输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历 
 * 和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中 * 序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。
 */
//思路：递归重建二叉树
class Solution {
public:
    TreeNode* myReConstruct(vector<int> &pre, vector<int> &vin, int pos, int left, int right) {
        if (left >= right)
            return NULL;
        TreeNode* t = new TreeNode(pre[pos]);
        int pos_vin = (int)(find(vin.begin()+left, vin.begin()+right, pre[pos]) - vin.begin());
        t->left = myReConstruct(pre, vin, pos+1, left, pos_vin);
        t->right = myReConstruct(pre, vin, pos+pos_vin-left+1, pos_vin+1, right);
        return t;
    }
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        return myReConstruct(pre, vin, 0, 0, vin.size());
    }
};
