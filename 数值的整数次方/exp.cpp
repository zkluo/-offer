/*
 * 题目描述
 * 给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方
 */
//思路：老老实实做
class Solution {
public:
    double Power(double base, int exponent) {
        double result = 1;
        for (int i=0; i<abs(exponent); i++) {
            result *= base;
        }
        if (exponent < 0)
            return 1/result;
        else
            return result;
    }
};
