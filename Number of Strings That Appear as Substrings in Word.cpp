class Solution 
{
  public:
    int numOfStrings(vector<string>& ps, string word)
    {
        int count=0;
        for(int i=0;i<ps.size();i++)
        {
            if(word.find(ps[i]) != string::npos)
                count++;
        }
        return count;
    }
};
