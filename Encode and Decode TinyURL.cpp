class Solution 
{
 public:
   int num = 0;
   unordered_map<string,string>mp;
   string encode(string longUrl) 
   { 
      num++;
      string addon=to_string(num);
      string ans="http://tinyurl.com/";
      ans=ans+string(addon);
      mp[ans]=longUrl;
      return ans;  
   }
   string decode(string shortUrl) 
   {
      return mp[shortUrl];
   }
};
