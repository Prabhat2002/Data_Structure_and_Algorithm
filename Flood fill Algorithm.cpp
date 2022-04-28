 bool valid(int i,int j,vector<vector<int>>&image,int cur)
    {
        if(i>=0 && i<image.size() && j>=0 && j<image[0].size() && image[i][j]==cur)
           return 1;
        return 0;
    }
    void call(int i,int j,int nc,int cur,vector<vector<int>>&image)
    {
        image[i][j]=nc;
        if(valid(i+1,j,image,cur))
           call(i+1,j,nc,cur,image);
        if(valid(i-1,j,image,cur))
           call(i-1,j,nc,cur,image);
        if(valid(i,j+1,image,cur))
           call(i,j+1,nc,cur,image);
        if(valid(i,j-1,image,cur))
           call(i,j-1,nc,cur,image);
           
    }
    vector<vector<int>> floodFill(vector<vector<int>>&image, int sr, int sc, int nc) 
    {
        int val=image[sr][sc];
        if(val!=nc)
           call(sr,sc,nc,val,image);
        return image;
    }
