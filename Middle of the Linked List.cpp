class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
      int size=0;  
      ListNode *p=head;
      while(p!=NULL)
      {
          p=p->next;
          size++;
      }
      ListNode *temp=head;
      size=size/2+1;
      int a=1;
      while(a<size)
      {
          temp=temp->next;
          a++;
      }
      ListNode *out=NULL;
        out=temp;
        return out;
    }
};
