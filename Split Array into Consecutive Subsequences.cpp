class Solution 
{
 public:
    // count frequency and pick an element from begining traverse array till it gets number having frequency less than that(MAX VALUE). If it breaks count_val>=3. 
    bool isPossible(vector<int>& nums) 
    {
       unordered_map<int, int> m;
       for(auto x : nums)
           m[x]++;
    
       int freq,count, cur;
       for(auto x : nums)
       {
           if(m[x]==0)
             continue;
           freq=m[x],count=0,cur=x;
           while(m.count(cur) && m[cur] >= freq)
           {
             freq=max(freq,m[cur]); 
             m[cur]--;
             count++;
             cur++;
           }
        if(count<3)
            return false;   
       } 
     return true;
    }
};
