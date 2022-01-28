class Solution {
public:
    vector<int> findLonely(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto a: mp)
        {
            if(a.second==1 and !mp.count(a.first+1) and !mp .count(a.first-1))
                v.push_back(a.first);
        }
        return v;
    }
};


 //Logically correct TLE
        // int n=nums.size();
        // vector<long long int>v;
        // map<int,int>mp;
        // for(int i=0;i<n;i++)
        // {
        //     mp[nums[i]]++;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(mp[nums[i]]>1)
        //         continue;
        //     auto x=find(nums.begin(),nums.end(),nums[i]-1);
        //     auto y=find(nums.begin(),nums.end(),nums[i]+1);
        //     if(x!=nums.end() || y!=nums.end())
        //         continue;
        //     v.push_back(nums[i]);   
        // }
        // return v;
