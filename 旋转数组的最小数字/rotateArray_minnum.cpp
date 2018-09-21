/*
 * 题目描述
 * 把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
 */
//思路：二分查找，如果mid位置的值小于low位置的，意味着最小元素在mid左边，反之
//在mid右边，如此循环下去，知道high和low相差为1
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
         if (rotateArray.empty()) {
            return 0;
        }
        int low = 0;
        int high = rotateArray.size() - 1;
        int middle = 0;
        if (rotateArray.at(low) < rotateArray.at(high)) { 
            return rotateArray.at(low);
        }
  
        while (low < high) {
            if (high - low == 1) {
                middle = high;
                break;
            }
            int middle = (low + high) / 2;
            if (rotateArray.at(middle) >= rotateArray.at(low)) {
                low = middle;
            }
            else if (rotateArray.at(middle) <= rotateArray.at(low)) {
                high = middle;
            }
        }
        return rotateArray.at(middle);
    }
};
