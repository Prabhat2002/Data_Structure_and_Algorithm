class Solution {
public:
    vector<int> diStringMatch(string S) 
    {
        int n=S.size();
        vector<int>res(n + 1, 0);
        int l=0,h=n;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='I')
                res[i]=l++;
            else
                res[i]=h--;
        }
        res.back() = l;
        return res;
        /*
        int n = S.size();
        vector<int> res(n + 1, 0);

        int minv = 0, maxv = 0;
        for(int i = 0; i < S.size(); i ++){
            int x;
            if(S[i] == 'I')
                x = ++maxv;
            else
                x = --minv;

            res[i + 1] = x;
        }

        for(int& e: res)
            e += -minv;
        return res;
        */
    }
};
