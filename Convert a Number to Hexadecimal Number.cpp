class Solution {
public:
    string toHex(int num) 
    {
         map<int,char>m;
         m.insert({0,'0'});
         m.insert({1,'1'});
         m.insert({2,'2'});
         m.insert({3,'3'});
         m.insert({4,'4'});
         m.insert({5,'5'});
         m.insert({6,'6'});
         m.insert({7,'7'});
         m.insert({8,'8'});
         m.insert({9,'9'});
         m.insert({10,'a'});
         m.insert({11,'b'});
         m.insert({12,'c'});
         m.insert({13,'d'});
         m.insert({14,'e'});
         m.insert({15,'f'});
         string res="";
         if(num==0)
             return "0";
         if(num>0) 
         {
           while(num) 
            {
              res=m[num%16]+res;
              num=num/16;
            }
         }
         else 
         {
           u_int n=num;
           while(n) 
           {
              res=m[n%16]+res;
              n=n/16;
           }
        }
    return res;
    }
};
