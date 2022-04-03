class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(), nums1.end());
        set<int>s2(nums2.begin(), nums2.end());
        vector<vector<int>>v;
        vector<int>u1,u2;
        for(auto i : s1)
        {
            if(!s2.count(i))
                u1.push_back(i);
        }
        v.push_back(u1);
        for(auto i : s2)
        {
            if(!s1.count(i))
                u2.push_back(i);
        }
        v.push_back(u2);
        return v;
    }
};
