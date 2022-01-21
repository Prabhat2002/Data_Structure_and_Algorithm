class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int len=nums.size()-1, left=-1, right=-1;
        int max=nums[0],min=nums[len];
        for(int i=1;i<=len;i++) 
        {
            int a=nums[i],b=nums[len-i];
            if(a<max) 
                right=i;
            else 
                max=a;
            if(b>min) 
                left=i;
            else 
                min=b;
            // cout<<right<<" "<<max<<"\n"<<left<<" "<<min<<"\n";
        }
        int val=left+right-len+1;
        int res=val>0?val:0;
        return res;
    }
};
