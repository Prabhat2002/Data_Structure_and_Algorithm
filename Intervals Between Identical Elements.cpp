class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) 
    {
        int n = arr.size();
        vector<long long> answer;
        vector<long long> prefix(n);
        vector<long long> suffix(n);
        unordered_map<long,long> steps;
        unordered_map<long,long> count;
        for(int i=0;i<n;i++)
        {
            steps[arr[i]] = i;
            count[arr[i]] = 0;
        }
        for(int i=0;i<n;i++)
        {
            prefix[i] = prefix[steps[arr[i]]] + count[arr[i]]*abs(i-steps[arr[i]]);
            count[arr[i]]++;
            steps[arr[i]] = i;
        }
        for(int i=0;i<n;i++)
        {
            steps[arr[i]] = i;
            count[arr[i]] = 0;
        }
        for(int i=n-1;i>=0;i--)
        {
            suffix[i]=suffix[steps[arr[i]]] +count[arr[i]]*abs(i-steps[arr[i]]);
            count[arr[i]]++;
            steps[arr[i]] = i;
        }
        for(int i=0;i<n;i++)
        {
            answer.push_back(prefix[i] + suffix[i]);
        }
        return answer;
    }
};

