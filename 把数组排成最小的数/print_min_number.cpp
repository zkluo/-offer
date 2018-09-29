/*
 * 题目描述
 * 输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323
 */
//思路：排序：a+b < b+a
bool cmp(int a, int b) {
    return to_string(a) + to_string(b) < to_string(b) + to_string(a);
}
class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        sort(numbers.begin(), numbers.end(), cmp);
        string s = "";
        for (int i=0; i<numbers.size(); ++i) {
            s = s + to_string(numbers[i]);
        }
        return s;
    }
};
