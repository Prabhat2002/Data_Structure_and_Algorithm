class Solution 
{
 public:
    string reorganizeString(string S) 
    {
        
        int n=S.length();
         map<char,int>mp;
         for(int i=0;i<n;i++)
             mp[S[i]]++;
         string s="";
         priority_queue<pair<int,char>>pq;
         for(auto i=mp.begin();i!=mp.end();i++)
         {
             pq.push({i->second,i->first});
         }
         priority_queue<pair<int,char>>pq1=pq;
         pair<int,char>block;
         while(!pq.empty())
         {
             if(s.empty())
             {
                s=s+pq.top().second;
                block.first=pq.top().first-1;
                block.second=pq.top().second;
                pq.pop();
             }
             else
             {
                // if(s[s.size()-1]==pq.top().second && pq.top().first>1)
                //       return ""; 
                s=s+pq.top().second;
                pair<int,char>p; 
                if(pq.top().first>1) 
                {
                   p.first=pq.top().first-1;
                   p.second=pq.top().second;
                }
                pq.pop();
                if(block.first>0) 
                   pq.push(block); 
                if(pq.top().first>0) 
                   block=p;
             }  
         }
        if(s.length()!=S.length())
            return "";
        return s;
    }
};
