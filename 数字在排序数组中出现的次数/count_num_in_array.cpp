/*
 * 题目描述
 * 统计一个数字在排序数组中出现的次数。
 */
//思路：先find，再往后找，直到找不到为止
class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        if (data.size() == 0)
            return 0;
        int pos = (int)(find(data.begin(), data.end(), k) - data.begin());
        if (pos == data.size()) 
            return 0;
        else {
            int cnt = 0;
            while (pos < data.size() && data[pos] == k) {
                cnt++;
                pos++;
            }
            return cnt;
        }       
    }
};
