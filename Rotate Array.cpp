class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
       int n=nums.size();
       k=k%n; 
       int x=n-k; 
       vector<int>arr; 
        for(int a=0;a<n;a++)
        {
           arr.push_back(nums[x%n]);
           x++;
        }
        for(int a=0;a<n;a++)
        {
           nums[a]=arr[a];
        }
     
    }
};
