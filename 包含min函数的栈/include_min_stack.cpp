/*
 * 题目描述
 * 定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1）
 */
//思路：维护一个数组，专门存放当前最小值
class Solution {
public:
    vector<int> stack_1;
    vector<int> stack_2;
    void push(int value) {
        stack_1.push_back(value);
        if (stack_2.empty()) {
            stack_2.push_back(value);
        } else {
            stack_2.push_back(value < stack_2.back() ? value : stack_2.back());
        }
    }
    void pop() {
        if (!stack_1.empty()) {
            stack_1.pop_back();
            stack_2.pop_back();
        }
    }
    int top() {
        return stack_1.back();
    }
    int min() {
        return stack_2.back();
    }
};
