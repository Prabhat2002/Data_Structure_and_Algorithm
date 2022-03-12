class Solution 
{
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) 
    {
         // return {10,55,45,25,25};
         vector<int>ans(n,0);
         for(int i=0;i<bookings.size();i++)
         {
            vector<int> tmp=bookings[i];   
            tmp[0]-=1;
            tmp[1]-=1;
            //assign value to inital index  
                ans[tmp[0]]+=tmp[2];
                if(tmp[1]<n-1)
                    ans[tmp[1]+1]-=tmp[2];
        }
        
        for(int i=1;i<ans.size();i++)
        {
            ans[i]+=ans[i-1];
        }
        return ans;
    }
};
