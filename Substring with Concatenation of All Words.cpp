class Solution {
public:
    vector<int> findSubstring(string S, vector<string>& L) 
    {
        vector<int> res;
        int num = L.size();
        int len = L[0].size();
        if (num==0){return res;}
        map<string,int> mp;  
        for (int i=0;i<num;i++){mp[L[i]]++;}      
         
        int i=0;
        while ((i+num*len-1)<S.size()){
            map<string,int> mp2;
            int j=0;
            while (j<num){
                string subs = S.substr(i+j*len,len);
                if (mp.find(subs)==mp.end()){
                        break;
                }else{
                    mp2[subs]++;
                    if (mp2[subs]>mp[subs]){
                        break;
                    }
                    j++;  
                }
            }
            if (j==num){res.push_back(i);}
            i++;
        }
     
        return res;    
    }
};
