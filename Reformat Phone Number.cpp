class Solution {
public:
    string reformatNumber(string number) 
    {
        string n="";
        for(int i=0;i<number.size();i++){
            if(number[i]=='-' || number[i]==' '){
                continue;
            }
            else{
                n+=number[i];
            }
        }
        string ans="";
        int i=0,si=n.size();
        while(i<n.size()){
            while(si>4){
                for(int j=i;j<i+3;j++){
                    ans+=n[j];
                }
                si-=3;
                ans+='-';
                i+=3;
            }
            if(si==4){
                for(int j=i;j<i+2;j++){
                    ans+=n[j];
                }
                ans+='-';
                i+=2;
                for(int j=i;j<i+2;j++){
                    ans+=n[j];
                }
                i+=2;
            }
            else if(si==3){
                for(int j=i;j<i+3;j++){
                    ans+=n[j];
                }
                i+=3;
            }
            else if(si==2){
                for(int j=i;j<i+2;j++){
                    ans+=n[j];
                }
                i+=2;
            }
        
        }
      return ans;    
    }
};
