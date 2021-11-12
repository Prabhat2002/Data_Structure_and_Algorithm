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
    ListNode* oddEvenList(ListNode* head) 
    {
       vector<int>v;
       while(head!=NULL)
       {
           v.push_back(head->val);
           head=head->next;
       }
       ListNode *out = NULL, *tempout = NULL; 
       for(int i=0;i<v.size();i=i+2)
       {
            if(out==NULL)
            {
                out=new ListNode(v[i]);
                tempout=out;
            }
            else
            {
               tempout->next=new ListNode(v[i]);
               tempout=tempout->next;
            } 
       }
       for(int i=1;i<v.size();i=i+2)
       {
           tempout->next=new ListNode(v[i]);
           tempout=tempout->next; 
       }
       return out; 
    }
};
