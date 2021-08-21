class Solution {
public:
    int minSubArrayLen(int s, vector<int>& ptr) 
    {
     int n=ptr.size();   
     int nums[n];   
     for(int a=0;a<ptr.size();a++)
     {
       nums[a]=ptr[a];
     }
        int i = 0, j = 0 , sum = 0 , m = INT_MAX;
        while(j < n)
        {
            sum += nums[j++];
            while(sum >=s)
            {
                m = min(m, j - i); //(old j) - i + 1 = j - i
                sum -= nums[i++];
            }
        }
        return m == INT_MAX ? 0 : m;
    }
};
