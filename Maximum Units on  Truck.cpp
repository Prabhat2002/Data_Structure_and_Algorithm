class Solution {
public:
    int maximumUnits(vector<vector<int>>&box,int truck) 
    {
        int n=box.size();
        for(int a=0;a<n;a++)
        {
            int x=box[a][0];
            box[a][0]=box[a][1];
            box[a][1]=x;
        }
        int sum=0; 
        sort(box.begin(),box.end());
        for(int a=n-1;a>=0;a--)
        {
            if(truck-box[a][1]>=0)
            {
                sum=sum+box[a][1]*box[a][0];
                truck=truck-box[a][1];
            }
            else
            {
                sum=sum+truck*box[a][0];
                break;
            }
        }
        return sum;
    }
    // 50+10+28+21=109
};
