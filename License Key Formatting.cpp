class Solution {
public:
    string licenseKeyFormatting(string S, int K) 
    {
        string result;
        int index = S.size();
        int tempK = 0;
        while(--index >= 0)
        {
            if(S[index] != '-')
            {
                if(tempK == K)
                {
                    result += '-';
                    tempK = 0;
                }
                result += (isalpha(S[index]) ? char(toupper(S[index])) : S[index]);
                tempK++;
            }
        }
        return string(result.rbegin(), result.rend());
    }
};
