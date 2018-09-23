/*
 * 题目描述
 * 输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示
 */
//思路：利用bitset
class Solution {
public:
     int  NumberOf1(int n) {
         bitset<32> b(n);
         return b.count();
     }
};
