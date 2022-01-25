class Solution {
public:
    string capitalizeTitle(string title) 
    {
        vector<int>arr(title.size(),1);             
        for(int i=title.size()-1;i>=0;--i)
        {
            if(title[i]==' ') 
                arr[i]=0;
            else
                if(i+1<title.size()) 
                    arr[i]+=arr[i+1];
            if(title[i]>='A' && title[i]<='Z')          
                title[i]=title[i]+32;
        }
        if(arr[0]>2) 
            title[0]-=32;                        
        for(int i=1;i<title.size();++i)
        {                 
            if(title[i-1]==' ')
                if(arr[i]>2) title[i]-=32;
        }
        return title;
    }
};
