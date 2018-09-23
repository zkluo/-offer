/* 
 * 题目描述
 * 输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则
 */
//思路：和合并两个有序数组一样
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
