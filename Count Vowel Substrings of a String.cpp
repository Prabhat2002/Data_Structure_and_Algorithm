class Solution {
public:
    int countVowelSubstrings(string w) 
    {
        int n=w.size();
        int sum=0;
        for(int i=0;i<n-4;i++)
        {
            set<char> v;
            for(int j=i;j<n;j++)
            {
               if(w[j]=='a'||w[j]=='e'||w[j]=='i'||w[j]=='o'||w[j]=='u')
               {
                    v.insert(w[j]);
                    if(v.size()==5)
                        sum++;
               }
                else
                    break;
            }
        }
        return sum;    
    }
};
