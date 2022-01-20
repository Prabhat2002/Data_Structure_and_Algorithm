class Solution 
{
 public:
    bool validUtf8(vector<int>& data) 
    {
        int idx = 0;
        int count = 1;
        while(idx < data.size()) 
        {
            int first_byte = data[idx];
            if((first_byte & 0x80)==0x00) 
                count = 1;
            else if((first_byte & 0xe0)==0xc0) 
                count = 2;
            else if((first_byte & 0xf0)==0xe0) 
                count = 3;
            else if ((first_byte & 0xf8)==0xf0) 
                count = 4; 
            else 
                return false;
            
            while (count > 1) 
            {
                idx++;
                count--;
                if(idx == data.size() || (data[idx] & 0xc0) != 0x80)
                     return false;
            }
            idx++;
        }
        return count == 1;    
    }
};
