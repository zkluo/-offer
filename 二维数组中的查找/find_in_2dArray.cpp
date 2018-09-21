/*题目描述
在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
*/
/*思路
从二维数组右上角开始，如果该位置的值大于target，则列号减一，如果该位置的值小于target，则行号加一，如果该位置的值等于target，则返回true
*/
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.size() == 0)
            return false;
        int row = 0, col = array[0].size()-1;
        while (row < array.size() && col >= 0) {
            if (array[row][col] < target) {
                row++;
            } else if (array[row][col] > target) {
                col--;
            } else {
                return true;
            }
        }
        return false;
    }
};
