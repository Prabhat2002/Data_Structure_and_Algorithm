class Solution {
public:
    int deleteAndEarn(vector<int>& nums) 
    {
      vector<int> v(10001);
        for(auto num : nums) 
            v[num] += num;
        int a=v[0], b=0,c= 0;
        for (int i=1; i<v.size();i++) 
        {
            c=b;
            b=a;
            a=max(v[i]+c,b);
        }
        return b;
    }
};
