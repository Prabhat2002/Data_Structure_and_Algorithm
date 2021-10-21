class Solution 
{
  public:
    #define ll long long
    ll power(int a){
        a--;
        ll i=1;
        while(a){
            a--;
            i*=10;
        }
        return i;
    }
    int findNthDigit(int n) {
        if(n<10)
            return n;
        ll div=9;
        ll c=1;
        while((n-div)>0){ 
            n-=div;
            c++;
            div=9*power(c)*c;
        }
        n--;
        string tmp=to_string(power(c)+n/c);
        cout << tmp;
        return (tmp[n%c]-'0');
    }
};
