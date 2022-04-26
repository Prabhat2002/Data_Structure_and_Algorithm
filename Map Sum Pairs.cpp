class MapSum 
{
 public:
    map<string,int>mp;
    MapSum() 
    {
          
    }
    void insert(string key, int val) 
    {
        mp[key]=val;
    }
    int sum(string prefix) 
    {
        int x=0;
        for(auto i:mp)
        {
            string s=i.first;
            int n=prefix.size();
            string s2=s.substr(0,n);
            if(s2==prefix)
                x=x+i.second;
        }
        return x;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */ 
