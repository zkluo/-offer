/*
 * 题目描述
 * 输入一个链表，反转链表后，输出新链表的表头。
 */
//思路：头插法
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if (pHead == NULL)
            return pHead;
        ListNode* head = new ListNode(0);
        while (pHead != NULL) {
            ListNode* next = pHead->next;
            pHead->next = head->next;
            head->next = pHead;
            pHead = next;
        }
        return head->next;
    }
};
