class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
     // int n=nums.size()-1; 
     sort(nums.begin(),nums.end());
      vector<int> pos;
        vector<int> neg;
        for(int num : nums){
            if(num < 0)
                neg.push_back(num);
            else
                pos.push_back(num);
        }
        int p1 = pos.size() < 3 ? INT_MIN : (pos.end()[-1] * pos.end()[-2] * pos.end()[-3]);
        int p2 = (pos.size() < 2 || neg.size() < 1) ? INT_MIN : (neg.back() * pos[0] * pos[1]);
       int p3 = (pos.size() < 1 || neg.size() < 2) ? INT_MIN : (pos.back() * neg[0] * neg[1]);
        int p4 = neg.size() < 3 ? INT_MIN : (neg.end()[-1] * neg.end()[-2] * neg.end()[-3]);
        return max(max(p1, p2), max(p3, p4));
    }
};
