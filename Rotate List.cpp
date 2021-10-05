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
    ListNode* rotateRight(ListNode* head, int k) 
    {
       ListNode* tmp=head; 
       if(tmp==NULL)
           return tmp;
       vector<int>v; 
       int n=0; 
       while(tmp!=NULL)
       {
           n++;
           v.push_back(tmp->val);
           tmp=tmp->next;
       }
       k=k%n; 
       vector<int>p(n+1,0);
       for(int a=0;a<n-k;a++)
       {
           p[(a+k)%n]=v[a];
       }
       for(int a=0;a<k;a++)
       {
           p[a]=v[n-k+a];
       }
       ListNode* out=NULL,*temp=NULL;
       int a=0; 
       while(a<n)
       {
             if(out==NULL)
             {
                out = new ListNode(p[a++]);
                temp = out;
            }
            else
            {
               temp->next =  new ListNode(p[a++]);
               temp = temp->next;
             }
       }
        return out;
    }
};
