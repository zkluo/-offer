/*
 * 题目描述
 * 用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
 */
//思路：pop时，若stack2为空，则把stack1中的全部倒进stack2中；
//push时，直接push进stack1就可以了
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int top;
        if (stack2.empty())
            while (!stack1.empty()) {
                top = stack1.top();
                stack1.pop();
                stack2.push(top);
            }
        top = stack2.top();
        stack2.pop();
        return top;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
