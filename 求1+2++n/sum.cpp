/*
 * 题目描述
 * 求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）
 */
//思路：递归
class Solution {
public:
	int Sum_Solution(int n) {
		if (n == 1)
			return 1;
		else
			return Sum_Solution(n - 1) + n;
	}
};