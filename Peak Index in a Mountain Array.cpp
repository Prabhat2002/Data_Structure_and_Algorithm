class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
       int i=0;
       int r=arr.size()-1;
       while(i<r)
       {
           int mid=(i+r)/2;
           if(arr[mid]<arr[mid+1])
               i=mid+1;
           else
              r=mid; 
       }
       return i; 
    }
};
