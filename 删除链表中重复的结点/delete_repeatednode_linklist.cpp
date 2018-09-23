/*
 * 题目描述
 * 在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
 */
//思路：居然一遍过了hh，就简单粗暴的遍历一遍就好了
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if (pHead == NULL || pHead->next == NULL) 
            return pHead;
        ListNode* head = new ListNode(0);
        head->next = pHead;
        ListNode* first = head;
        while (first->next && first->next->next) {
            if (first->next->val != first->next->next->val) {
                first = first->next;
            } else {
                ListNode* temp = first->next;
                while (temp && temp->next) {
                    if (temp->next->val != temp->val)
                        break;
                    else 
                        temp = temp->next;    
                }
                first->next = temp->next;
            }
        }
        return head->next;
    }
};
