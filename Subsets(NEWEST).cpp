Method : 1

void call_subset(vector<vector<int>>&ans,vector<int>&nums,vector<int>cur,int i,int n)
    {
        if(i==n)
        {
           ans.push_back(cur);
           return;
        }
        call_subset(ans,nums,cur,i+1,n);
        cur.push_back(nums[i]);
        call_subset(ans,nums,cur,i+1,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>cur;
        call_subset(ans,nums,cur,0,nums.size());
        return ans;
    }

Method : 2

void call_subset(vector<vector<int>>&ans,vector<int>&nums,vector<int>cur,int i,int n)
    {
        if(i==n-1)
        {
           ans.push_back({});
           ans.push_back({nums[i]});
        }
        else
        {
            call_subset(ans,nums,cur,i+1,n);
            int m=ans.size();
            for(int j=0;j<m;j++)
            {
                vector<int>v=ans[j];
                v.push_back(nums[i]);
                ans.push_back(v);
            }
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>cur;
        call_subset(ans,nums,cur,0,nums.size());
        return ans;
    }
