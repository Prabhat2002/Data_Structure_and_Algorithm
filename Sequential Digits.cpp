class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> res;
        queue<int> q{{1, 2, 3, 4, 5, 6, 7, 8}};
        while (!q.empty()) 
        {
            auto i = q.front(); 
            q.pop();
            if(i>high) 
                continue;
            if(low<=i) 
                res.emplace_back(i);
            if(i % 10 + 1 < 10) 
                q.emplace(i * 10 + i % 10 + 1);
        }
        return res;    
    }
};
/*
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int> v;
        int nl=to_string(low).length();
        int nh=to_string(high).length();
        
        for(int i=nl;i<=nh;i++){
            for(int j=0;j<10-i;j++){
               int ans=stoi(s.substr(j,i));
                
                if(ans>=low && ans<=high){
                    v.push_back(ans);
                }
            }
        }
        //sort(v.begin(),v.end());
        return v;
    }
};*/
