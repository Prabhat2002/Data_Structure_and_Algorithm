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
    ListNode* partition(ListNode* head, int x) 
    {
         vector<int>v;
         ListNode *tmp=head;
         while(tmp!=NULL)
         {
             v.push_back(tmp->val);
             tmp=tmp->next;
         }
         vector<int>res;
         for(int i=0;i<v.size();i++)
         {
             if(v[i]<x)
                 res.push_back(v[i]);
         }
        for(int i=0;i<v.size();i++)
         {
             if(v[i]>=x)
                 res.push_back(v[i]);
         }
        ListNode *out=NULL,*temp=NULL;
        for(int i=0;i<res.size();i++)
        {
            if(out==NULL)
            {
                out=new ListNode(res[i]);
                temp=out;
            }
            else
            {
                temp->next=new ListNode(res[i]);
                temp=temp->next;
            }
        }
        return out;
    }
};
