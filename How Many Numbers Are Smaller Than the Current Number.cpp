class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
          
          int n=nums.size();
          vector<int>v;
          for(int a=0;a<n;a++)
          {
              int count=0;
              int val=nums[a];
              for(int b=0;b<n;b++)
              {
                  if((a!=b) &&(val>nums[b]))
                      count++;
              }
              v.push_back(count);
          }
        return v;
    }
};

// 8 1 2 2 3
// 4 0 1 1 3  
