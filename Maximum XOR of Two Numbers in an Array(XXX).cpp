class Solution 
{
 public:
    struct Tries{
        array<Tries *, 2> mp;
    };

    void insert(Tries *root, int n){
        for(int i=31; i>=0; i--){
            int bit = (n&(1<<i));
            if(bit) bit = 1;
            if(root->mp[bit] == NULL)
                root->mp[bit] = new Tries();
            root = root->mp[bit];
        }
    }

    long long int findMax(Tries *root, long long int n){
        long long int ans = 0;
        for(int i=31; i>=0; i--){
            int bit = (n&(1<<i));
            if(bit) bit = 1;
            if(root->mp[!bit]){
                ans += (1<<i);
                root = root->mp[!bit];
            }
            else
                root = root->mp[bit];
        }
        return ans;
    }
    
    int findMaximumXOR(vector<int>& nums) 
    {
        int ans = 0;
        Tries *root = new Tries();
        for(int i : nums)
            insert(root, i);
        for(int i : nums){
            int x = findMax(root, i);
            ans = max(ans, x);
        }
        return ans;
    }
};
