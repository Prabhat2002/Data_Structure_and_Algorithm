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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        vector<int>v;
        for(int a=0;a<lists.size();a++)
        {
            ListNode *temp=lists[a];
            while(temp!=NULL)
            {
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* out=NULL,*tempout=NULL;
        for(int a=0;a<v.size();a++)
        {
            int dig=v[a];
             if(out==NULL)
             {
                out = new ListNode(dig);
                tempout = out;
             }
             else
             {
               tempout->next =  new ListNode(dig);
                tempout = tempout->next;
             } 
        }
        return out;
    }
};
