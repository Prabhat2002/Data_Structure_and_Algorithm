class Solution {
public:
    void wiggleSort(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<int>arr=nums;
        int n=nums.size()-1;
        int m=n/2;
        for (int i=0,j=1;i<nums.size();i=i+2,j=j+2) 
        {
            nums[i]=arr[m--];
            if (j<nums.size()) 
                nums[j]=arr[n--];
        }
        //3 5 2 4 1 
    }
};
