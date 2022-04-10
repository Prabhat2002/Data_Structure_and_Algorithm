// 1000
// 0011
// 1011
// 0101
class Solution 
{
 public:
    int minFlips(int a, int b, int c) 
    {
        int ans=0;
        while(a || b || c)
        {
            int x=a%2;
            int y=b%2;
            int z=c%2;
//Method : 1
            if(z==0)
            {
                if(x==1 && y==1)
                  ans+=2;  
                else if(x==1 || y==1)
                    ans++;
            }
            else
            {       
                if(x==0 && y==0)
                    ans++;
            }

//Method : 2
            
//             if(x&&y)
//             {
//                 if(z==0)
//                     ans=ans+2;
//             }
//             else if(x||y)
//             {
//                 if(z==0)
//                     ans=ans+1;
//             }
//             else if(!x&&!y)
//             {
//                 if(z)
//                   ans=ans+1;
//             }
            a=a/2;
            b=b/2;
            c=c/2;
        }
        return ans;
    }
};
