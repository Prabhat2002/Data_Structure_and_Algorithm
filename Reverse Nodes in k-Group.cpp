class Solution 
{
 public:
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode *current = head, *prev = NULL, *next = NULL;
        ListNode *tempcurr, *tempprev;
        int count = 0;
        while(current != NULL && count < k) 
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
        if(k > count) 
        {
            tempcurr = prev;
            tempprev = NULL;
            while(tempcurr != NULL) 
            {
                next = tempcurr->next;
                tempcurr->next = tempprev;
                tempprev = tempcurr;
                tempcurr = next;
            }
            return tempprev;
        }
       if(current != NULL) 
          head->next = reverseKGroup(current, k);
      return prev;
    }
};
