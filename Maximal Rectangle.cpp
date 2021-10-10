class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int m=matrix.size();
        if(m==0) 
            return 0;
        int n=matrix[0].size();
        if(n==0) 
            return 0;
        vector<int>height(n+1);
        int ans = 0;
        for(int i=0;i<m;i++)
        {
            stack<int>st;
            for(int j=0;j<height.size(); j++)
            {
              if(j<n)
                height[j]=(matrix[i][j]=='1')?height[j]+1:0;
              while(!st.empty() && height[j]<height[st.top()])
              {
                int a=st.top(); 
                st.pop();
                ans=max(ans,height[a]*(st.empty()?j:(j-1-st.top())));
              }
                st.push(j);
            }
        }
        
        return ans;   
    }
};
