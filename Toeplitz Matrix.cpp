class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
       int n1=matrix.size(); 
       int n2=matrix[0].size();
       for(int i=0;i<n1-1;i++) 
       {
		 for(int j=0;j<n2-1;j++) 
         {
			if(matrix[i][j]!=matrix[i+1][j+1]) 
				return false;
		 }
       }
	    return true;
    }
};
