class Solution
{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
       vector<int>ans;    
       sort(arr2,arr2+n);
       for(int i=0;i<m;i++)
       {
           int ind=-1;
           int j=0,k=n-1;
           while(j<=k)
           {
               int m=(j+k)/2;
               if(arr2[m]<=arr1[i])
               {
                   ind=m;
                   j=m+1;
               }
               else
                   k=m-1;
           }
           ans.push_back(ind+1);
       }
       return ans;
    }
};
