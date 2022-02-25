class Solution 
{
 public:
    int maximumScore(int a, int b, int c) 
    {
        priority_queue<int>maxh;
        maxh.push(a);
        maxh.push(b);
        maxh.push(c);
        int ans=0, fmax=1,smax;
        while(fmax)
        {
            fmax=maxh.top();
            maxh.pop();
            smax=maxh.top();
            maxh.pop();
            if(fmax==0||smax==0)
                break;
            fmax--;
            smax--;
            ans++;
            maxh.push(fmax);
            maxh.push(smax);
        }
        return ans;       
    }
};
