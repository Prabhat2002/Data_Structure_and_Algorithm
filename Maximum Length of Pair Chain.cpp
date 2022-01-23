class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) 
    {
        sort(pairs.begin(), pairs.end(), [](vector<int> &p1, vector<int> &p2){
           return p1[1] < p2[1];
        });
        // for(int i=0;i<pairs.size();i++)
        //     cout<<pairs[i][0]<<" "<<pairs[i][1]<<endl;
        int count = 1;
        int endTime = pairs[0][1];
        for(int i = 1; i < pairs.size(); ++i){
            if(pairs[i][0] > endTime){
                ++count;
                endTime = pairs[i][1];
            }
        }
        return count;
    }
};

