class Solution {
private:
    vector<int> nums;    
public:
    Solution(vector<int> nums) 
    {
        srand(time(0));
        this->nums = nums;
    }
    
    int pick(int target) 
    {
        while(true) 
        {
            int i=rand()%nums.size();
            if(target==nums[i])
              return i;
        }
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
