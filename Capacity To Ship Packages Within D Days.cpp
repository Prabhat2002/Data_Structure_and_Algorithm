class Solution {
public:
       bool ispossible(vector<int>&weights, int days,int mid)
       {
          int d =0; 
          int sum =0;
          for(int i =0; i< weights.size(); i++)
          {
             sum += weights[i];
             if(sum > mid)
             {
                d++;
                sum = weights[i];
             }
          }
          return d<days;
       }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0; 
        int high =0; 
        int ans = 0;
         for(int i =0; i< weights.size(); i++){
             low = max(low, weights[i]);
             high += weights[i];
         }
         high=high+low;
        while(low<= high){
            int mid = (high + low)/2;
            if(ispossible(weights, days, mid) == true)
            {
                ans = mid; 
                high = mid-1;
            }
            else
                 low = mid+1;
        }
        return ans;
    }
};
