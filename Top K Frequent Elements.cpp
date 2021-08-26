class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
          unordered_map<int, int> count;        
    for (const int num : nums)
      ++count[num];
    priority_queue<pair<int, int>> q;
    for (const auto& pair : count) {
      q.emplace(-pair.second, pair.first);
      if (q.size() > k) q.pop();
    }
    vector<int> ans;
    for (int i = 0; i < k; ++i) {
      ans.push_back(q.top().second);
      q.pop();
    }
    return ans; 
    }
};
