class Solution 
{
 public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) 
    {
        unordered_map<int,int> entry;
        for(int i=0;i<pieces.size();i++)
           entry[pieces[i][0]] = i;
        int i =  0;
        while(i < arr.size())
        {
           if(entry.count(arr[i]))
           {
              vector<int> &piece  = pieces[entry[arr[i]]];
               for(auto x: piece)
                  if(x != arr[i++])
                      return false;
           } 
           else 
              return false;
        }
      return true;
    }
};
