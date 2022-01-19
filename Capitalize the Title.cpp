class Solution {
public:
    string capitalizeTitle(string title) 
    {
        int n= title.size();
        for(int i=0; i<n; i++)
            title[i] = tolower(title[i]);   
    
        int count=0, x=-1;    
        for(int i=0;i<n; i++)
        {
            if(x==-1)
                x=i;    
            count++;
            if(title[i]==' ')
            {
                if(count>3)
                    title[x]=toupper(title[x]);
                count=0;
                x=-1;
            }
            
        }
        if(count>2){
            title[x] = toupper(title[x]);
        }
        
        return title;
    }
};
