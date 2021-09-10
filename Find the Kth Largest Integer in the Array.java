import java.math.BigInteger;
class Solution {
    public String kthLargestNumber(String[] nums, int k) 
    {
        int n=nums.length;
        PriorityQueue<BigInteger>pq=new PriorityQueue();
        for(int i=0;i<n;i++)
        {
            pq.offer(new BigInteger(nums[i]));
        }
        BigInteger res=null;
        int ind=n-k+1;
        for(int a=0;a<ind;a++)
        {
            res=pq.poll();
        }
        return res.toString();
    }
}
