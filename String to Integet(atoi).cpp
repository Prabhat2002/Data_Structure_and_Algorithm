class Solution {
public:
    int myAtoi(string str)
    {
        int i = 0;
        while(str[i] == ' ')
            ++i;
        if(i == str.size()) return 0;
        while(str[i] != '-' && str[i] != '+' && (str[i] > '9' || str[i] < '0') && i < str.size()) {
            if(str[i] < '0' && str[i] > ' ' || str[i] <= '~' && str[i] > '9')
                return 0;
            ++i;
        }
        if(i == str.size()) return 0;
        bool neg = false, visit = false;
        if(str[i] == '-') {
            neg = true;
            visit = true;
        }
        else if(str[i] == '+') {
            neg == false;
            visit = true;
        }
        if(visit)   ++i;
        if(i == str.size()) return 0;
        int64_t num = 0;
        if(str[i] >= '0' && str[i] <= '9') 
            while(str[i] >= '0' && str[i] <= '9' && i < str.size()) {
                num = (num * 10) + (str[i] - '0');
                int64_t result = (neg) ? -num : num;
                if(result >= INT_MAX)    return INT_MAX;
                if(result <= INT_MIN)    return INT_MIN;
                ++i;
            }
        else
            return 0;
        
        int64_t result = (neg) ? -num : num;
        return result;
    }
};
