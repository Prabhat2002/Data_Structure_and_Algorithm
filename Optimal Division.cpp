class Solution 
{
 public:
    string optimalDivision(vector<int>& nums) 
    {
        if(nums.size()==1)
            return to_string(nums[0]);
        if(nums.size()==2)
            return to_string(nums[0])+"/"+to_string(nums[1]);
        string s="";
        s=s+to_string(nums[0]);
        s=s+"/";
        s=s+"(";
        for(int i=1;i<nums.size();i++)
        {
            if(i!=nums.size()-1)
               s=s+to_string(nums[i])+"/";
            else
               s=s+to_string(nums[i])+")";
        }
        return s;
    }
};
