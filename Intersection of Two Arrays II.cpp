class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            auto x=find(nums2.begin(),nums2.end(), nums1[i]);
            if (x!= nums2.end())
            {
                v.push_back(nums1[i]);
                nums2.erase(x);
            }
        }
     return v;   
    }
};
