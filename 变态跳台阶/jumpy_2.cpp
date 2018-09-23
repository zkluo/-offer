/*
 * 题目描述
 *一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法
 */
//思路：动态规划，上一题的变种
class Solution {
public:
    int jumpFloorII(int number) {
        vector<int> dp(1+number, 0);
        dp[1] = 1;
        dp[2] = 2;
        int sum = dp[1] + dp[2];
        for (int i=3; i<=number; i++) {
            dp[i] = sum + 1;
            sum += dp[i];
        }
        return dp[number];
    }
};
