class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) 
    {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
        {
            if(n==0)
                return 1;
            else
            {
                if(nums[0]==1 && n==0)
                    return 0;
                else if(nums[0]==1 && n==1)
                    return 0;
                else
                    return 1;
            }
        }
        
        vector<int>v;
        int j=0;
        int m=nums.size();
        for(j=0;j<m;j++)
        {
            if(nums[j]==1)
                break;
        }
        if(j==m)
        {
           if(j%2==0 && j/2>=n)
               return 1;
           else if(j%2==1 && j/2+1>=n)
             return 1;
            else
                return 0;
               
        }
        for(int i=0;i<m;i++)
        {
            if(nums[i]==1)
                v.push_back(i);
        }
        int z=v.size();
        int res1=v[0];
        int res2=m-1-v[z-1];
        int res=0;
        res=res+res1/2;
        res=res+res2/2;
        cout<<res;
        for(int i=1;i<z;i++)
        {
            int val=v[i]-v[i-1]-1;
            if(val/2>=1 && val%2==1)
                res=res+val/2;
            if(val/2>=2 && val%2==0)
                res=res+val/2-1;
        }
        // cout<<res
        if(res>=n)
            return 1;
        return 0;
    }
};
