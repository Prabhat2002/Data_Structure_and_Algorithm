class Solution {
public:
    string getHint(string secret, string guess) 
    {
        int b = 0;
        int c = 0;
        int mp1[10] = {0,0,0,0,0,0,0,0,0,0};
        int mp2[10] = {0,0,0,0,0,0,0,0,0,0};
        for (int i=0;i<secret.size();i++)
        {
            if (secret[i] == guess[i]) 
                b += 1; 
            else
            {
                if (mp1[guess[i]-'0']==0)
                    mp2[guess[i]-'0'] +=1;
                else
                {
                    mp1[guess[i]-'0'] -=1;
                    c += (mp1[guess[i]-'0']>=0);
                }
                if (mp2[secret[i]-'0']==0)
                        mp1[secret[i]-'0'] +=1;
                else
                {
                    mp2[secret[i]-'0'] -=1;
                    c += (mp2[secret[i]-'0']>=0);
                }
            }
        }
        return to_string(b) + "A" + to_string(c) + "B";
    }

};
