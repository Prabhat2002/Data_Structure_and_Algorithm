string DAYS[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
class Solution 
{
  public:
    string dayOfTheWeek(int day, int month, int year) 
    {
        if(month < 3) 
        {
            month += 12;
            --year;
        }
        int c = year / 100, y = year % 100;
        int w=((c/4-2*c+y+y/4+13*(month+1)/5+day-1)%7+7)%7;
        return DAYS[w];   
    }
};
