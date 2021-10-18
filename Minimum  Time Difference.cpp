class Solution {
public:
    int findMinDifference(vector<string>& time) 
    {
       int n= 60*24;
        vector<int>min;
        for (auto t:time)
            min.push_back(stoi(t.substr(0, 2))*60+stoi(t.substr(3)));
        sort(min.begin(), min.end());
        int res=INT_MAX;
        for (int i=0;i<time.size();++i) 
        {
            int x=(n+min[(i+1)%time.size()]- min[i])%n;
            res=res>x?x:res;
        }
        return res;
    }
};
