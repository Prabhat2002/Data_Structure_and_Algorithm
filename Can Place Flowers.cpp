class Solution 
{
 public:
    bool canPlaceFlowers(vector<int>& f,int n) 
    {
        for (int i=0;i<f.size();i++) 
        {
            if(f[i]==0 && (i==0 || f[i-1]==0) && (i==f.size()-1 || f[i+1]==0)) 
            {
                f[i]=1;
                --n;
            }
            if (n<=0) 
                return true;
        }
        return false;
    }
};
