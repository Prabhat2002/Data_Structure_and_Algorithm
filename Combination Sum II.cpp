class Solution {
public:
    void dfs(vector<int> &num, int target, vector<vector<int> > &res, vector<int> &r,int st){
        if (target<0){
            return;
        }else{
            if (target==0){
                res.push_back(r);
            }else{
                int pre = -1;
                for (int i=st;i<num.size();i++){
                    if (num[i]!=pre){
                        r.push_back(num[i]);
                        dfs(num,target-num[i],res,r,i+1);
                        pre = num[i];
                        r.pop_back();
                    }
                }
            }
        }
    }
    
    vector<vector<int> > combinationSum2(vector<int> &num, int target) 
    {
      
        vector<vector<int> > res;
        if (num.size()==0){return res;}
        sort(num.begin(),num.end());
        vector<int> r;
        dfs(num,target,res,r,0);
        return res;
    }
};
