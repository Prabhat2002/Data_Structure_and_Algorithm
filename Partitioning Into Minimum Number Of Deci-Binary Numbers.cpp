class Solution {
public:
    int minPartitions(string s) 
    {
        int ans=*max_element(s.begin(),s.end())-'0';     
        return ans;
    }
};
