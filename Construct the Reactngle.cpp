class Solution {
public:
    vector<int> constructRectangle(int area) 
    {
        vector<int>res={1,area};
        int val=area-1;
        for(int a=2;a<=area;a++)
        {
            if(area%a==0 &&abs(area/a-a)<val)
            {
                res.clear();
                res={a,area/a};
                val=abs(area/a-a);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
