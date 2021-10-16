class Solution {
public:
    string convertToBase7(int num) 
    {
         map<int,char>m;
         m.insert({0,'0'});
         m.insert({1,'1'});
         m.insert({2,'2'});
         m.insert({3,'3'});
         m.insert({4,'4'});
         m.insert({5,'5'});
         m.insert({6,'6'});
         string res="";
         if(num==0)
             return "0";
        int temp=1;
         if(num<0)
         {
             temp=-1;
             num=num*temp;
         }
           while(num) 
            {
              res=m[num%7]+res;
              num=num/7;
            }
     if(temp==-1)
         return "-"+res;
    return res;
    }  
};
