/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) 
    {
        if(!head||!head->next)
            return;
        ListNode *p1=head,*p2=head;
        while(p2->next&&p2->next->next)
        {
            p1=p1->next;
            p2=p2->next->next;
        }
        ListNode *preMid=p1,*preCur=p1->next;
        while(preCur->next)
        {
            ListNode* cur = preCur->next;
            preCur->next = cur->next;
            cur->next = preMid->next;
            preMid->next = cur;
        }
        p1=head;
        p2=preMid->next;
        while(p1 != preMid)
        {
            preMid->next = p2->next;
            p2->next = p1->next;
            p1->next = p2;
            p1 = p2->next;
            p2 = preMid->next;
        }
    }
};
