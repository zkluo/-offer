/*
 * 题目描述
 * 大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0）。 
 */
//思路：直接做，不能用递归，因为会产生大量的重复计算
class Solution {
public:
    int Fibonacci(int n) {
        int res;
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {
           int n_1 = 1;
           int n_2 = 0;
           for (int i=2; i<=n; i++) {
               res = n_1 + n_2;
               n_2 = n_1;
               n_1 = res;
           }
        }
        return res;
    }
};
