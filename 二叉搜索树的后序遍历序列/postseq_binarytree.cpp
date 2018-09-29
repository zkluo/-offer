/*
 * 题目描述
 * 输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同
 */
//思路：递归
class Solution {
public:
    bool isBST(int pos, int left, int right, vector<int> &sequence, vector<int> &inseq) {
        if (left >= right)
            return true;
        if (pos < 0 && pos >= sequence.size())
            return false;
        int in_pos = (int) (find(inseq.begin()+left, inseq.begin()+right, sequence[pos])
                            - inseq.begin());
        if (in_pos == right) 
            return false;
        else
            return isBST(pos-(right-in_pos-1)-1, left, in_pos, sequence, inseq)
            && isBST(pos-1, in_pos+1, right, sequence, inseq);
    }
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.size() == 0)
            return false;
        vector<int> inseq(sequence);
        sort(inseq.begin(), inseq.end());
        return isBST(sequence.size()-1, 0, inseq.size(), sequence, inseq);
    }
};
