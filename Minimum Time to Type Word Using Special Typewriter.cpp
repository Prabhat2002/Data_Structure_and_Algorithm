class Solution {
public:
    int minTimeToType(string s) 
    {
        s.insert(s.begin(),'a');
        int n=s.size();
        int len=0;
        for(int i=1;i<n;i++)
        {
            int s1=abs(s[i-1]-s[i]);
            int s2=26-abs(s[i-1]-s[i]);
            len+=min(s1,s2)+1;
        }
        return len;    
    }
};
