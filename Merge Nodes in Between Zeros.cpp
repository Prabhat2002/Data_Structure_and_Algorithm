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
    ListNode* mergeNodes(ListNode* head) 
    {
        vector<int>v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size();
        if(v[n-1]!=0)
            v.push_back(0);
        n=v.size();
        vector<int>res;
        int sum=0;
        for(int i=1;i<n;i++)
        {
            
            if(v[i]==0)
            {
                res.push_back(sum);
                sum=0;        
            }
            sum=sum+v[i];
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
