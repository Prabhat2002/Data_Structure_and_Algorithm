class Solution {
public:
    bool isSumEqual(string first, string second, string target) 
    {
        string f="",s="",t="";
        for(int i=0;i<first.size();i++)
            f=f+to_string(first[i]-'a');
        for(int i=0;i<second.size();i++)
            s=s+to_string(second[i]-'a');
        for(int i=0;i<target.size();i++)
            t=t+to_string(target[i]-'a');
        int fi=stoi(f)+stoi(s);
        int si=stoi(t);
        return fi==si;
    }
};
