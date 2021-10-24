class Solution {
public:
    int findDegree(vector<int>& v, int k){
    unordered_map<int,int> m;
    int ans=0;
    for(int i=0;i<k;i++){
        m[v[i]]++;
        ans=max(ans,m[v[i]]);
    }
    for(int i=k;i<v.size();i++){
        m[v[i-k]]--;
        m[v[i]]++;
        ans=max(ans,m[v[i]]);
    }
    return ans;
}
int findShortestSubArray(vector<int>& nums) {
    int k=findDegree(nums,nums.size());
    int l=k,r=nums.size(),m,ans=nums.size();
    while(l<=r){
        m=l+(r-l)/2;
        int x=findDegree(nums,m);
        if(x==k){
            ans=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return ans;
}
};
