class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) 
    {
        int a=points[0][0];
        int b=points[0][1];
        int c=points[1][0];
        int d=points[1][1];
        int e=points[2][0];
        int f=points[2][1];
        int area=a*(d-f)+c*(f-b)+e*(b-d);
        if(area==0)
            return 0;
        return 1;
    }
};
