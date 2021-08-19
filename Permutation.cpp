class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums)
     {
        vector<vector<int> > result;  
	    permuteRecursive(nums, 0, result);
	    return result;
       }
        void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result)	        {
		 if (begin >= num.size())
         {
		    result.push_back(num);
		 }
		
		  for (int i = begin; i < num.size(); i++) 
          {
		     swap(num[begin], num[i]);
		     permuteRecursive(num, begin + 1, result);
		     swap(num[begin], num[i]);
		  }
        }
};
