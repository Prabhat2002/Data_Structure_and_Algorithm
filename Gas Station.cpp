class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
         if( gas.size() == 0 || cost.size() == 0) 
            return -1;
        int sum=0;
        int total=0;
        int ind=-1;
        for(int i=0;i<gas.size();i++) 
        {
            sum=sum+gas[i]-cost[i];
         //if(anytime it will be negative sum=0; because we want to find the index which valid for a comolete journey)
            total += gas[i] - cost[i];
         //total sum is negative means that your consuption is hight than storage
            if(sum < 0) 
            {
                ind=i;
                sum=0;
            }
        }
        return total < 0 ? -1 : ind+1;    
    }
};
