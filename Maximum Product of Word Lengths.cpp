class Solution {
public:
    int maxProduct(vector<string>& words) 
    {
        int n=words.size();
        vector<int> res(n);
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(char c : words[i])
                res[i] |= (1 << (c-'a'));
            cout<<res[i]<<endl;
        }
        for(int i = 0; i < n; i++)
        {
            auto it = res.begin()+i;
            while(it != res.end())
            {
                   it = find_if(it+1, res.end(), [&res, i](const int& e){
                       return ((res[i] & e) == 0);
                   });
                if(it != res.end()){
                    ans = max(ans, (int)words[i].size()*(int)words[it-res.begin()].size());
                }
            }
            
        }
        return ans;
    }
};
