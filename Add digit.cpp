class Solution {
public:
    int addDigits(int num) {
       long long n = num;
      
       while(n > 9){
            long long ans = 0;
           while(n>0){
           ans+=n%10;
           n/=10;  
       }
       n=ans;
        }
        return n;
        }
};
