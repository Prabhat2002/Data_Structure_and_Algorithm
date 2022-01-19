class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
       /* int res=0;
         int n=nums.size();
         for(int i=0;i<n;i++)
         {
             nums[i]=nums[i]%60;
             cout<<nums[i];
         }
         unordered_map<int,int>mp;
         for(int j=0;j<n;j++)
             mp[nums[j]]++;
         for(auto i=mp.begin();i!=mp.end();i++)
         {
             if(i->first>0  && i->first<29)
             {
            
                auto x=mp.find(60-i->first);
                cout<<x->first<<" "<<x->second<<" ";
                if(x!=mp.end());
                {
                    res=res+i->second*x->second;
                    mp.erase(x); 
                }
            }
         }
        res+=(mp[0]*(mp[0]-1)/2)+(mp[30]*(mp[30]-1)/2);
        return res;*/
        int count=0;
	int a[60]={0};
	for(int i=0;i<time.size();i++){
	a[time[i]%60]++;
	}
	int i=1,j=59;
	while(i<j){ //for rules 1-29
	count+=a[i]*a[j];
	i++;
	j--;
	}
    count+=(a[0]*(a[0]-1)/2)+(a[30]*(a[30]-1)/2);
	return count;
    }
};
