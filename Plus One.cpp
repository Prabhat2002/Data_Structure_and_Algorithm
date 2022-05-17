class Solution 
{
  public:
    vector<int> increment(vector<int> arr ,int n) 
    {
        if(arr[n-1]!=9)
        {
            arr[n-1]+=1;
            return arr;
        }
        reverse(arr.begin(),arr.end());
        int i=0,carry=1;
        while(i<n && carry)
        {
            int x=arr[i]+carry;
            arr[i]=x%10;
            carry=x/10;
            i++;
        }
        if(carry)
           arr.push_back(1);
        reverse(arr.begin(),arr.end());
        return arr;
    }
};
