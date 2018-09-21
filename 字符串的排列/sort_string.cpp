/*
 * 题目描述
 * 输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
 */
//思路：dfs
class Solution {
public:
    void Rank(string &str, vector<string> &res, int index) {
        if (index == str.size() - 1) {
            res.push_back(str);
            return;
        } 
        for (int i=index; i<str.size(); i++) {
            if (i == index || str[i] != str[index]) {
                swap(str[i], str[index]);
                Rank(str, res, index+1);
                swap(str[i], str[index]);
            }
        }
    }
    vector<string> Permutation(string str) {
        sort(str.begin(), str.end());
        vector<string> res;
        Rank(str, res, 0);
        sort(res.begin(), res.end());
        return res;
    }
};
