/*
 * 题目描述
 * 
把只包含质因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，但14不是，因为它包含质因子7。 习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数
 */
//思路：类似动归
class Solution {
private:
    int Min(int a, int b, int c){
        int min = (a<b)?a:b;
        min = (min<c)?min:c;
        return min;
    }
public:
    int GetUglyNumber_Solution(int index) {
       if (index < 1)
           return 0;
       int p2 = 0, p3 = 0, p5 = 0;
       vector<int> uglyNum;
       uglyNum.push_back(1);
       for(int i = 1; i < index; i++){
           int cur = *(uglyNum.end() - 1);
           while(uglyNum.at(p2) * 2 <= cur)
               p2++;
           while(uglyNum.at(p3) * 3 <= cur)
               p3++;
           while(uglyNum.at(p5) * 5 <= cur)
               p5++;
           int min = Min(uglyNum.at(p2)*2, uglyNum.at(p3)*3, uglyNum.at(p5)*5);
           uglyNum.push_back(min);
       }
       return *(uglyNum.end() - 1);
    }
};
