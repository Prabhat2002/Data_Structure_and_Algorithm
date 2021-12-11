class Solution {
public:
    bool areNumbersAscending(string s) 
    {
        istringstream iss(s); 
        string buf; 
        int prev=INT_MIN; 
        while (iss >> buf) 
            if(all_of(buf.begin(), buf.end(), [](auto& ch) 
            {return isdigit(ch);})) 
            {
                int curr = stoi(buf); 
                if (prev >= curr) return false; 
                prev = curr; 
            }
        return true; 
    }
};
