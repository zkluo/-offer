/*******************************************************
 题目描述
 输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
 *******************************************************/
//思路：遍历链表，存入一个vector中，然后reverse就行
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        while (head != NULL) {
            res.push_back(head->val);
            head = head->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
