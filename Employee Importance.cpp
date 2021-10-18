/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> emp, int id) 
    {
       int ans = 0;
        for(Employee* e : emp)
        {
            if(e->id==id)
            {
                ans = e->importance;
                for(int x : e->subordinates)
                {
                    ans += getImportance(emp,x);
                }
                return ans;
            }
        }
        return 0;
    }
};
