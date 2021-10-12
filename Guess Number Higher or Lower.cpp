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
        long long int x=n;
        long long int l=1, r=x;
        while (l<=r) 
        {
            long long int mid=(l+r)/ 2;
            if (guess(mid)<=0) 
                r=mid-1;
            else 
                l=mid+1;
        }
        return l;      
    }
};
