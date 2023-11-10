class Solution {
public:
    int divide(int dividend, int divisor) {
      
         long long num = static_cast<long long>(dividend) / static_cast<long long>(divisor);
        if(num>INT_MAX){
            return INT_MAX;}
        else if (num<INT_MIN){
            return INT_MIN;
        }

       
        
        
        return num;
    }
};
