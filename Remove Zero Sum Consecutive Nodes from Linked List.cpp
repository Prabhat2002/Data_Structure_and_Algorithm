class Solution 
{
 public:
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
      ListNode* dummy = new ListNode(0);
      dummy->next = head;
      unordered_map <int, ListNode*> m;
      m[0] = dummy;
      int sum = 0;
      while(head)
      {
         sum += head->val;
         m[sum] = head;
         head = head->next;
      }
      head = dummy;
      sum = 0;
      while(head)
      {
         sum += head->val;
         ListNode* temp = m[sum];
         if(temp != head){
            head->next = temp->next;
         }
         head = head->next;
      }
      return dummy->next;
    }
};
