class Solution {
public:
    int minMoves(int target, int mD) 
    {
       int res=0; 
       while(target>1 &&  mD)
       {
               int val=target/2;
               res++;
               cout<<res<<" ";
               res+=target%2;
               cout<<res<<" ";
               target=val;
               mD--;
       }
       res=res+(target-1);
       return res; 
    }
};
