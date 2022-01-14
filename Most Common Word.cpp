class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) 
    {
        map <string,int>mp;
        string s="";
        for(int i=0;i<paragraph.size();++i)
        {
          if(paragraph[i]>='a' && paragraph[i]<='z' ||paragraph[i]>='A' && paragraph[i]<='Z' )
             s+=tolower(paragraph[i]);
	      else
          {
               if(s!="")                                                              
			   { 
			      mp[s]++;                                 
				  s="";                                                        
			   }         
          }
        }
        if(s!="")                                                           
		{
		   mp[s]++;                                                         
		   s="";                                                              
		}
        for(auto i:banned)
            mp[i]=0;
        int cnt=INT_MIN;
        string mx;
        for(auto i:mp)
        {
            if(i.second>cnt)
            {
                cnt=i.second;
                mx=i.first;           
            }
        }
        return mx;
    }
};
