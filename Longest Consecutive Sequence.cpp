class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> unp;
        for (auto num : nums) 
            unp.emplace(num);
        
        int max_int = 0;
        while (!unp.empty()) 
        {
            int num = *unp.begin();
            unp.erase(num);
            int low = num - 1;
            while (unp.count(low)) 
            {
                 unp.erase(low);
                --low;
            }

            int up = num + 1;
            while (unp.count(up)) 
            {
                unp.erase(up);
                ++up;
            }
            max_int =max(max_int, up - low - 1);
        }
        return max_int;
    }
};
