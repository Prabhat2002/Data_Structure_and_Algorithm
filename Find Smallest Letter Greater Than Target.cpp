class Solution {
public:
    char nextGreatestLetter(vector<char>& nums, char target) 
    {
        int n=nums.size();
        int i=0,j=n-1;
        while (i<j) 
        {
            int m=(j+i)/2;
            if (nums[m]<=target) 
                i = m+1;
            else 
                j = m;
        }
        return nums[i]<=target?nums[0]:nums[i];
    }
};
