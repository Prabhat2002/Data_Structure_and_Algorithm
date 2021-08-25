class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int>num;
        for(int a=0;a<m;a++)
            num.push_back(nums1[a]);
        for(int a=0;a<n;a++)
            num.push_back(nums2[a]);
        
        sort(num.begin(),num.end());
        nums1=num;
    }
}; 
