class Solution {
public:
    int totalHammingDistance(vector<int>& nums) 
    {
        int total=0;
        for (int i=0;i<32;i++) 
        {
            int count=0;
            for(int num: nums) 
            {
                if ((num >> i & 1) == 1) 
                    count++;
            }
            total=total+count*(nums.size()-count);
            // cout<<total<<" ";
        }
        return total;
    }
};
