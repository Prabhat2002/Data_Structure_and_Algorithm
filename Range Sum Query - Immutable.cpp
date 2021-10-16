class NumArray {
public:
   vector<int>sums; 
    NumArray(vector<int>& nums) 
    {
         sums = nums;
        for (int i = 1; i< nums.size(); i++){
            sums[i] = sums[i-1] + nums[i];
        }
    }

    int sumRange(int i, int j) 
    {
        return i==0 ? sums[j] : sums[j] - sums[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
