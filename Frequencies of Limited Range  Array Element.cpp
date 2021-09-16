    void frequencyCount(vector<int>& arr,int N, int p)
    { 
        vector<int>temp;
        int count=0;
        map<int,int>mp;
        for(int a=0;a<N;a++)
        {
            mp[arr[a]]++;
        }
        for(int a=1;a<=N;a++)
        {
            int x=mp[a];
            temp.push_back(x);
        }
        arr=temp;
    }
