class Solution 
{
 public:
    int convertTime(string cur, string cor) 
    {
       int h1=cur[0]-'0';
       int h2=cur[1]-'0';
       int h3=cor[0]-'0';
       int h4=cor[1]-'0';
       int m1=cur[3]-'0';
       int m2=cur[4]-'0';
       int m3=cor[3]-'0';
       int m4=cor[4]-'0';
       int x1=h1*10+h2;
       int x2=h3*10+h4;
       int y1=m1*10+m2;
       int y2=m3*10+m4;
       int z1=x1*60+y1;
       int z2=x2*60+y2;
       int z=z2-z1;
       int a=z/60;
       z=z%60;
       int b=z/15;
       z=z%15;
       int c=z/5;
       z=z%5;
      return a+b+c+z;   
    }
};Minimum Number of Operations to Convert Time
