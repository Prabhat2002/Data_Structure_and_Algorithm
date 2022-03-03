class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) 
    {
        
        // Two Pointer Approach
        int res=0,i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]>nums2[j])
                i++;
            else
            {
                res=max(res,j-i);
                j++;
            }
        }
        return res;
        
        // Binary Search approach
        int n=nums1.size(),ans=0;
        for(int i=0;i<n;i++)
        {
            int l=i;
            int h=nums2.size()-1;
            int val=i;
            while(l<=h)
            {
                int mid=(l+h)/2;
                if(nums2[mid]>=nums1[i])
                {
                    val=mid;
                    l=mid+1;
                }
                else
                    h=mid-1;
            }
            ans=max(ans,val-i);
        }
        return ans;
    }
};
