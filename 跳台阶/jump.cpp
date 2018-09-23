/*
 * 题目描述
 * 一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）
 */
//思路：动态规划
class Solution {
public:
    int jumpFloor(int number) {
        vector<int> r(number+1);
        r[1] = 1;
        r[2] = 2;
        for (int i=3; i<=number; i++) {
            r[i] = r[i-1] + r[i-2];
        }
        return r[number];
    }
};
