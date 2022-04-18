class Solution 
{
 public:
    vector<int> nextGreaterElements(vector<int>& arr) 
    {
       int m=arr.size(); 
       for(int i=0;i<m-1;i++)
           arr.push_back(arr[i]);
       int n=arr.size();
       stack<int>s;
       vector<int>ans(n);
       for(int i=n-1;i>=0;i--) 
       {
            if(s.empty())
               ans[i]=-1;
            else if(s.size()>0 && s.top()>arr[i])
                ans[i]=s.top();
            else if(s.size()>0 && s.top()<=arr[i])
            {
                while(s.size()>0 && s.top()<=arr[i])    
                    s.pop();
                if(s.size()==0)
                   ans[i]=-1;
                else
                   ans[i]=s.top();
            }
            s.push(arr[i]);    
        }
        vector<int>v;
        for(int i=0;i<=n/2;i++)
            v.push_back(ans[i]);
        return v;
    }
};
