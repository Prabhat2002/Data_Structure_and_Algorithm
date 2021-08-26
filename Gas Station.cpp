class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
       if ( gas.size() == 0 || cost.size() == 0) 
       {
            return -1;
        }

        int sum = 0;
        int total = 0;
        int index = -1;

        for(int i = 0; i<gas.size(); i++) 
        {
            sum += gas[i] - cost[i];
            total += gas[i] - cost[i];
            if(sum < 0) 
            {
                index = i;
                sum = 0;
            }
        }
        return total < 0 ? -1 : index + 1;
    }
};
