class Solution {
public:
    int numFriendRequests(vector<int>& ages) 
    {
        map<int,int>count;
        for (auto age : ages) 
            count[age]++;
        int res=0;
        for(int i = 1;i<=120;i++) 
        {
            for(int j=1;j<=120;j++) 
            {
                if((j>0.5*i+7) && (j<=i) && (j<=100 || i>=100)) 
                    res+=i==j?count[i]*(count[i]-1):count[i]*count[j];
            }
        }
        return res; 
    }
};
