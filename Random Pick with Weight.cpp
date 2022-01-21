class Solution 
{
   public:
    vector<int> acc;
    Solution(vector<int>& w) 
    {
        this->acc = w;
        for(int i = 1; i < this->acc.size(); i++)
            this->acc[i] += this->acc[i-1];
    }
    
     int pickIndex() 
     {
        int num = rand()%acc[acc.size()-1]+1;
        int left = 0, right = acc.size()-1;
        while(left <= right)
        {
            int mid = left + (right-left)/2;
            if(num == acc[mid])
            
                return mid;
            else if(num < acc[mid])
                right = mid-1;
            else
                left = mid+1;
        }
        return left;
     }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
