class Solution 
{
 public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int n=arr.size();
        for(int i=0;i<n-2;i++)
        {
            int x=arr[i];
            int y=arr[i+1];
            int z=arr[i+2];
            if(x%2==1 && y%2==1 && z%2==1)
                return 1;
        }
      return 0;
    }
};
