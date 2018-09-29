/* 
 * 题目描述
 * 输入两个链表，找出它们的第一个公共结点
 */
//思路：先求出两个链表的长度差，长的先走几步，然后一起走
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        int len_list1 = 0;
        int len_list2 = 0;
        ListNode *pHead1_temp = pHead1;
        ListNode *pHead2_temp = pHead2;
        while (pHead1_temp != NULL) {
            len_list1++;
            pHead1_temp = pHead1_temp->next;
        }
        while (pHead2_temp != NULL) {
            len_list2++;
            pHead2_temp = pHead2_temp->next;
        }
        int gap_len = 0;
        if (len_list1 > len_list2) {
            gap_len = len_list1 - len_list2;
            while (gap_len > 0) {
                pHead1 = pHead1->next;
                gap_len--;
            }
        } else {
            gap_len = len_list2 - len_list1;
            while (gap_len > 0) {
                pHead2 = pHead2->next;
                gap_len--;
            }
        }
        while (pHead1 != pHead2) {
            pHead1 = pHead1->next;
            pHead2 = pHead2->next;
        }
        return pHead1;
    }
};
