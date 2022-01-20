class Solution {
    public boolean validUtf8(int[] data) 
    {
       int i=0; 
           int count=0;
       while(i<data.length){
        int v = data[i];
        if(count==0){
            if((v&240)==240 && (v&248)==240){
                count=3;
            }else if(((v&224)==224) && (v&240)==224){
                count=2;
            }else if((v&192)==192 && (v&224)==192){
                count=1;
            }else if((v|127)==127){
                count=0;
            }else{
                return false;
            }
        }else{
            if((v&128)==128 && (v&192)==128){
                count--;
            }else{
                return false;
            }
        }
 
        i++;
    }
 
    return count==0; 
    }
}
