int majorityElement(int a[], int size)
    {
        map<int,int>mp;
        for(int i=0;i<size;i++)
        {
           mp[a[i]]++;
        }
        int val=-1;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second>size/2)
            {
                val=i->first;
                break;
            }
        }
    return val;    
    }
