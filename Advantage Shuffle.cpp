class Solution 
{
 public:  
    vector<int> advantageCount(vector<int>& A, vector<int>& B) 
    {
      int n=A.size();
			map<int,queue<int>>m;
			for(int i=0;i<n;i++) 
                m[B[i]].push(i);        	                                        
			sort(A.begin(),A.end());
			sort(B.begin(),B.end());
			vector<int> ans(n);	
			int i=0,j=n-1;                         
			for(int k=0;k<n;k++) 
            {                
				if(A[k]>B[i]) 
                    ans[i++]=A[k];
				else 
                    ans[j--]=A[k];
			}
			
			vector<int> arr(n);                     
			for(int i=0;i<n;i++) 
            {
				int idx= m[B[i]].front();
				m[B[i]].pop();
				arr[idx]=ans[i];
			}
			return arr;              
    }
};
