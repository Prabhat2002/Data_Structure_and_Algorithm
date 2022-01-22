class Solution {
public:
    int reachNumber(int target) 
    {
        long long int sum=0,step=0;
        target=abs(target);
        while(sum<target)
             sum+=step++;
        while((sum-target)%2==1)
             sum+=step++;
        return step-1;
    }
};
