class Solution {
public:
    bool divisorGame(int n) {
        int count = 0;
        int x;
        
        for (x=1 ; x<n ; x++){
       while(n > 1){
           while(0<x<n){
               if(n%x == 0){
                   count++;
                   n-=x;
               }
               break;
           }

       }}
       if(count%2 == 0){
           return false;
       }
       return true;
    }
};
