class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        vector<vector<int>>mergedIntervals;
        int temp=0;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<int>tempIntervals = intervals[0];
        for(auto it : intervals)
        {
            if(it[0] <= tempIntervals[1])
            {
                tempIntervals[1] = max(it[1],tempIntervals[1]);
            }
            else
            {
                mergedIntervals.push_back(tempIntervals);
                tempIntervals = it;
            }
        }
        mergedIntervals.push_back(tempIntervals);
        return mergedIntervals;  
    }
};
