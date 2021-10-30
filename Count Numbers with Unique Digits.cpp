class Solution {
public:
    int countNumbersWithUniqueDigits(int n) 
    {
        /*if(n==0)
            return 1;
        long long int res=pow(10,n)-1;
        int count=1;
        for(int a=1;a<res;a++)
        {
            int val=a;
            int temp=1;
            map<int,int>mp;
            while(val)
            {
                int j=val%10;
                if(mp[j]==1)
                { 
                    temp=0;
                    break;
                }
                mp[j]++;
                val=val/10;
            }
            if(temp)
                count++;
            mp.clear();
        }
        return res;*/ 
        if (n==0) 
            return 1;
        int count=10;
        for (int k=2,fk=9;k<=n;k++) 
        {
            fk*=10-(k-1);
            count+=fk;
        }
        return count;  
    }
};
