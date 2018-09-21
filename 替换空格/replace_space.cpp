/****************************************************************
 题目描述
 请实现一个函数，将一个字符串中的每个空格替换成“%20”。
 例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
 ***************************************************************/

//思路：先遍历一遍字符串，得到所有空格的数量，算出新字符串的长度，然后从后往前替换空格
//（如果从前往后替换空格的话，原字符串中空格后的字符会被”%20“覆盖）
class Solution {
public:
    void replaceSpace(char *str,int length) {
        int space_cnt = 0;
        for (int i=0; i<length; ++i) {
            if (str[i] == ' ') {
                space_cnt++;
            }
        }
        int new_length = length + space_cnt * 2;
        int p_str = length - 1;
        int p_new_str = new_length - 1;
        for (; p_str>=0; p_str--) {
            if (str[p_str] == ' ') {
                str[p_new_str--] = '0';
                str[p_new_str--] = '2';
                str[p_new_str--] = '%';
            } else {
                str[p_new_str--] = str[p_str];
            }
        }
    }
};
