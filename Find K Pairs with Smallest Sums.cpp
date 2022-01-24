class Solution 
{
  public:
   vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>> , greater<pair<int, vector<int>>>> p;
        for(int i = 0; i < n; i++)
             p.push({nums1[i] + nums2[0], {i, 0}});
        vector<vector<int>> res;
        while(k-- && !p.empty())
        {
            auto temp = p.top();
            p.pop();
            int a = temp.second[0], b = temp.second[1];
            res.push_back({nums1[a], nums2[b]});
            if(b + 1 < m)
            {
                p.push({nums1[a] + nums2[b + 1], {a, b+1}});
            }
        }
        return res;  
    }    
};
    
    
    
    
/*  int n=nums1.size();
        int m=nums2.size();
        vector<vector<int>>res;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int sum=nums1[i]+nums2[j];
                res.push_back({sum,nums1[i],nums2[j]});
            }
        }
        sort(res.begin(),res.end());
        vector<vector<int>>v;
        int r=k<=res.size()?k:res.size();
        for(int i=0;i<r;i++)
        {
            v.push_back({res[i][1],res[i][2]});
        }
       return v;
    }*/    
