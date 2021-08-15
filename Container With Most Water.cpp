class Solution {
public:
    int maxArea(vector<int>& height) 
    {
       int l=0,r=height.size()-1;
       int max=0;
       while(l<r)
       {
           int min=height[l]<height[r]?height[l]:height[r];
           if(max<min*(r-l))
             max=min*(r-l);
           if(height[l]<height[r])
              l++;
           else
               r--;
       }
        return max;
    }
};
