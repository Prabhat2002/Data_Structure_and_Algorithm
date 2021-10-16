class Solution {
public:
    void process(vector<vector<int>>&res,vector<int>&curr,vector<int> &cand,int r,int st)
{
    if(r<0)
        return;
    else if(r==0)
        res.push_back(curr);
    else 
    {
        for(int i=st;i<cand.size();i++)
        {
            curr.push_back(cand[i]);
            process(res,curr,cand,r-cand[i],i);
            curr.pop_back();
        }
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>res;
    vector<int>curr;
    sort(candidates.begin(), candidates.end());
    process(res,curr, candidates, target,0);
    return res;
}
};
