class Solution {
public:
    int nthUglyNumber(int n) 
    {
        vector <int> v(n + 1);
      if(n == 1){
         return 1;
      }
      int two = 2, three = 3, five = 5;
      int twoIdx = 2;
      int threeIdx = 2;
      int fiveIdx = 2;
      for(int i = 2; i <= n; i++){
         int curr = min({two, three, five});
         v[i] = curr;
         if(curr == two){
            two = v[twoIdx] * 2;;
            twoIdx++;
         }
         if(curr == three){
            three = v[threeIdx] * 3;
            threeIdx++;
         }
         if(curr == five){
            five = v[fiveIdx] * 5;
            fiveIdx++;
         }
      }
      return v[n];
    }
};
