class Solution {
public:
    int trap(vector<int>& height)
    {
       int n=height.size(); 
       int hi[n];   
       for(int a=0;a<n;a++)
       {
           hi[a]=height[a];
       }
       int left[n];
       int right[n];
       left[0]=hi[0];
       right[n-1]=hi[n-1];
       for(int a=1;a<n;a++)
       {
           if(left[a-1]<hi[a])
              left[a]=hi[a];
           else
               left[a]=left[a-1];
       }
       for(int a=n-2;a>=0;a--)
       {
           if(right[a+1]<hi[a])
              right[a]=hi[a];
           else
               right[a]=right[a+1];
       }
      int sum=0;
        for(int a=0;a<n;a++)
        {
            int x=left[a];
            int y=right[a];
            int z=x<y?x:y;
            sum=sum+(z-hi[a]);
        }
      return sum;
    }
};
