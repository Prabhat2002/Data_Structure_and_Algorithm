class Solution 
{
public:
    bool isNStraightHand(vector<int>& nums, int k) 
    {
        map<int, int> mp;
        for(int n : nums)
		   mp[n]++;

	    int count;
	    while (mp.size() >= 1) 
        {
		  int cur = mp.begin()->first;
          count=0;  
		  while(count++ < k) 
          {
            	if (mp.find(cur) == mp.end())
			    	return false;
        	    mp[cur]--;
        	    if (mp[cur] == 0)
				     mp.erase(cur);
			    cur++;
		   }
	
	     }
	   return mp.size() == 0;
    }
};
