class Solution {
public:
    int kthGrammar(int n, int k) 
    {
        if(n==1 || k==1)
            return 0;
        int length=pow(2,n-1);
        int mid=length/2;
        if(k<=mid)
        {
            return kthGrammar(n-1,k);
        }
        else
            return !kthGrammar(n-1,k-mid); 
    }
};


//     string s="0";
//     string callin(string st)
//     {
//         string str;
//         for(int i=0;i<st.length();i++)
//         {
//             if(st[i]=='1')
//                 str=str+"0";
//             else
//                 str=str+"1";
//         }
//         return str;
//     }
//     int kthGrammar(int n, int k) 
//     {
//         if(n==1 && k==1)
//             return 0;
//         long long int k1=k;
//         long long int n1=n;
        
//         call(n);
//         int x=s[k1-1]-'0';
//         return x;
//     }
//     void call(long long int n)
//     {
//         if(n==1)
//         {
//             return;
//         }
//         s=s+callin(s);
//         call(n-1);
//     }
