class Solution 
{
 public:
    int distanceBetweenBusStops(vector<int>& nums, int start, int end) 
    {
    if(start>end)
        swap(start, end);
    int total = 0, first_path = 0;
     for(int i=0;i<nums.size();i++)
     {
        if(i>=start && i<end)
           first_path += nums[i];
        total += nums[i];
     }
    return min(total - first_path, first_path);
    }
};
