class Solution 
{
  public:
    int magicalString(int n) 
    {
        vector<int> v{1,2,2};
        int i = 2;
        while(v.size()<n)
           v.insert(v.end( ), v[i++],v.back()^3); 
        return count(v.begin(),v.begin()+n, 1);   
    }
};
