/*
 * 题目描述
 * 给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null
 */
//思路：快慢指针
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if (pHead == NULL || pHead->next == NULL)
            return NULL;
        ListNode *fast = pHead, *slow = pHead;
        while (fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                 break;
        }
        fast = pHead;
        while (fast != slow){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};
