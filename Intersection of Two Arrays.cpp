class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
         vector<int>v;
        set<int>s1;
        set<int>s2;
        for(int i=0;i<nums1.size();i++)
            s1.insert(nums1[i]);
        
        for(int i=0;i<nums2.size();i++)
            s2.insert(nums2[i]);
        
        for(auto i=s1.begin();i!=s1.end();i++)
        {
            int val=*i;
            auto x=s2.find(val);
            if (x!= s2.end())
            {
                v.push_back(val);
                s2.erase(x);
            }
        }
     return v;   
    }
};
