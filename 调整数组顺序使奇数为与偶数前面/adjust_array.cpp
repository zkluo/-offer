/*
 * 题目描述
 * 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
 */
// 思路：新建两个数组，分别存放奇数部分和偶数部分
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> odd;
        vector<int> even;
        for (int i=0; i<array.size(); i++) {
            if (array[i] % 2 == 1) 
                odd.push_back(array[i]);
            else 
                even.push_back(array[i]);
        }
        int i = 0;
        for (int j=0; j<odd.size(); ++j)
            array[i++] = odd[j];
        for (int j=0; j<even.size(); ++j)
            array[i++] = even[j];
   }
};
