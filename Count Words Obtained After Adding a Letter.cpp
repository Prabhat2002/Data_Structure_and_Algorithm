class Solution 
{
 public:
    int wordCount(vector<string>& nums1, vector<string>& nums2) 
    {
        set<string>s;
        for(int i=0;i<nums1.size();i++)
        {
            sort(nums1[i].begin(),nums1[i].end());
            s.insert(nums1[i]);
        }
        int ans=0;
        for(int i=0;i<nums2.size();i++)
        {
            string st=nums2[i];
            sort(st.begin(),st.end());
            bool flag=0;
            for(int j=0;j<st.size();j++)
            {
                string search=st.substr(0,j)+st.substr(j+1);
                if(s.find(search)!=s.end())
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                ans++;
        }
        return ans;
    }
};
