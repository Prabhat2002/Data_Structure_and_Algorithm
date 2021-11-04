class Solution {
public:
    int dayOfYear(string dt) 
    {
       int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
       int y=stoi(dt.substr(0, 4)), m = stoi(dt.substr(5, 2)); 
       int d=stoi(dt.substr(8));
         if(m>2&&y%4==0&&(y%100!=0||y%400==0))
             ++d; 
         while (--m>0) 
             d+=days[m-1];
         return d;
    }
};
