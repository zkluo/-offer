/*
 * 题目描述
 * 求出1~13的整数中1出现的次数,并算出100~1300的整数中1出现的次数？为此他特别数了一下1~13中包含1的数字有1、10、11、12、13因此共出现6次,但是对于后面问题他就没辙了。ACMer希望你们帮帮他,并把问题更加普遍化,可以很快的求出任意非负整数区间中1出现的次数（从1 到 n 中1出现的次数）
 */
//思路：暴力枚举，居然也能过！
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n) {
        int count = 0;
        for (int i=0; i<=n; i++){
            int temp = i;
            while (temp != 0){
                if (temp%10 == 1){
                    count++;
                }
                temp /= 10;
            }
        }
        return count;
    }
};
