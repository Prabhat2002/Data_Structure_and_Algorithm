class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        vector<int>v;
        for(int i=0;i<index.size();i++)
        {
            v.insert(v.begin()+index[i],nums[i]);
            cout<<*(v.begin()+index[i])<<" "<<nums[i];
        }
        return v;
    }
};
