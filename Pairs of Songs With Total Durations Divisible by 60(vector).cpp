class Solution 
{
 public:
    int numPairsDivisibleBy60(vector<int>& nums) 
    {
           int count=0;
	       vector<int>v(60,0);
	       for(int i=0;i<nums.size();i++)
           {
	           v[nums[i]%60]++;
	       }
	       int i=1,j=59;
	       while(i<j)
           { 
	         count=count+v[i]*v[j];
	         i++;
	         j--;
	       }
           count=coutn+(v[0]*(v[0]-1)/2)+(v[30]*(v[30]-1)/2);
	    return count;
    }
};
