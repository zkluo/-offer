/*
 * 题目描述
 * 一个整型数组里除了两个数字之外，其他的数字都出现了偶数次。请写程序找出这两个只出现一次的数字
 */
//思路：BitSet
import java.util.BitSet;
public class Solution {
    public void FindNumsAppearOnce(int[] array, int num1[], int num2[]) {
        BitSet bitSet = new BitSet();
        for (int i=0; i<array.length; ++i) {
            if (bitSet.get(array[i])) {
                bitSet.clear(array[i]);
            } else {
                bitSet.set(array[i]);
            }
        } 
        boolean flag = false;
        for (int i=0; i<array.length; ++i) {
            if (bitSet.get(array[i]) && !flag) {
                num1[0] = array[i];
                flag = true;
            } else if (bitSet.get(array[i]) && flag) {
                num2[0] = array[i];
                break;
            }
        }
    }
}