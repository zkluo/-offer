/*
 * 题目描述
 * 输入一个链表，输出该链表中倒数第k个结点
 */
//思路：双指针法
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if (pListHead == NULL || k == 0)
            return NULL;
        ListNode* head = pListHead;
        ListNode* mid = head;
        while (k > 1) {
           if (mid->next == NULL)
               return NULL;
           mid = mid->next;
           k--;
        }  
        while (mid->next != NULL) {
            mid = mid->next;
            head = head->next;
        }
        return head;
    }
};
