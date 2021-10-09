class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
      int n = nums.size();
      vector <int> res(n, - 1);
      stack <int> st;
      for(int i = 0; i < 2 * n; i++){
         int idx = i % n;
         int x = nums[idx];
         while(!st.empty() && nums[st.top()] < x){
            res[st.top()] = x;
            st.pop();
         }
         st.push(idx);
      }
      return res;
    }
};
