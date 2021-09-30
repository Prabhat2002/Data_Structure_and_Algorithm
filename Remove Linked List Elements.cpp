class Solution 
{
  public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode *prev, *cur;
        while(head != NULL && head->val == val)
            head = head->next;
        cur = head;
        while(cur != NULL)
        {
             if(cur->val==val)
                prev->next=cur->next;
             else
                prev=cur;
            cur=cur->next;
        }
        return head;
    }
};
