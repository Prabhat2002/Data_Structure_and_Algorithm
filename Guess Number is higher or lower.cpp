/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        int val=-1;
       long long int start=1;
       long long int end=n;
       while(start<=end)
       {
            long long int mid =(start+end)/2;
            int x=guess(mid);
            if(x==0){
               val=mid;
               break;
              }
              else if(x==1)
               start=mid+1;
           else
               end=mid-1;
       }
        return val;
    }
};
