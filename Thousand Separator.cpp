class Solution {
public:
    string thousandSeparator(int n) 
    {
        if (n==0) 
             return "0";
        int count=0;
        string res;
        while(n>0)
        {
            int m = n % 10;
            res=res+to_string(m);
            count++;
            n /= 10;
            if (count % 3 == 0 && n > 0) 
                res=res+".";
        }
        reverse(res.begin(),res.end());
        return res;
    }
};


//         string s=to_string(n);
//         reverse(s.begin(),s.end());
//         string res="";
//         int x=s.length();
//         for(int i=0;i<x;i=i+3)
//         {
            
//             if(i>=x-3)
//             {
//                 res=res+s.substr(i,x);
//                 break;
//             }
//             else
//             {
//                 res+=s.substr(i,i+3);
//                 res+=".";
//             }
//         }
//         reverse(res.begin(),res.end());
//         return res;
