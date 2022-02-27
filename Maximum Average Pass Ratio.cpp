class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) 
    {
        
//         priority_queue<pair<double,pair<int,int>>,vector<pair<double,pair<int,int>>>,greater<pair<double,pair<int,int>>>> pq;
//         // while(extraStudents)
//         // {
//         //     pi top= pq.top();
//         //     pq.pop();
//         //     extraStudents--;
//         //     int pass=top.second.first;
//         //     int total=top.second.second;
//         //     pass++;
//         //     total++;
//         //     long double growth=(double)(pass+1)/(total+1) - (double)(pass)/(total);
//         //     pq.push({growth,{pass,total}});
//         // }
//         // double res=0;
//         // while(!pq.empty())
//         // {
//         //     res+=(double)(pq.top().second.first)/(pq.top().second.second);
//         //     pq.pop();
//         // }
//         // return (double)res/(classes.size());
//         int n=nums.size();
//         // priority_queue<vector<double>>pq;
       
//         for(int i=0;i<n;i++)
//         {
//             // vector<double>v;
//             double x=nums[i][0];
//             double y=nums[i][1];
//             double z=x/y;
//             pq.push({z,{x,y}});
//         }
        
//         while(add--)
//         {
//             pair<double,pair<int,int>>p=pq.top();
//             pair<int,int>p1=p.second;
//             double x=p1.first+1;
//             double y=p1.second+1;
//             double z=x/y;
//             pq.pop();
//             pq.push({z,{x,y}});
//         }
        
//         double res=0;
//         while(!pq.empty())
//         {
//             pair<double,pair<int,int>>p=pq.top();
//             res=res+p.first;
//             pq.pop();
//         }
//         return res/n;
        priority_queue<std::pair<double, int>> q;
      for (int i=0; i<classes.size(); ++i)
        q.push({(classes[i][0]+1.0)/(classes[i][1]+1.0) - double(classes[i][0])/double(classes[i][1]), i});
      for (int i=0; i<extraStudents; ++i) {
        auto p = q.top();
        q.pop();
        ++classes[p.second][0];
        ++classes[p.second][1];
        q.push({(classes[p.second][0]+1.0)/(classes[p.second][1]+1.0) - double(classes[p.second][0])/double(classes[p.second][1]), p.second});
      }
      double ratios = 0;
      for (int i=0; i<classes.size(); ++i)
        ratios += double(classes[i][0])/double(classes[i][1]);
      return ratios/classes.size();
    }
};
