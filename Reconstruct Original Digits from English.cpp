class Solution 
{
 public:
    string originalDigits(string s) 
    {
        map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        map<int,int>mp1;
        mp1[0]=mp['z'];
        mp1[2]=mp['w'];
        mp1[4]=mp['u'];
        mp1[6]=mp['x'];
        mp1[8]=mp['g'];
        
        mp1[1]=mp['o']-mp1[0]-mp1[2]-mp1[4];
        mp1[3]=mp['h']-mp1[8];
        mp1[5]=mp['f']-mp1[4];
        mp1[7]=mp['s']-mp1[6];
        mp1[9]=mp['i']-mp1[6]-mp1[5]-mp1[8];
        string str="";
        for(int i=0;i<10;i++)
        {
            while(mp1[i]--)
            {
                str=str+to_string(i);
            }
        }
        return str;
    }
};
