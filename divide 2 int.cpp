class Solution {
public:
    int divide(int dividend, int divisor) {
       //edge ey to remember
        /*if(dividend == INT_MAX && divisor == -1 ){
            return -INT_MAX;
        }*/
        
        // declaration is creating prblm from last que
        // bada data store nhi ho paiga int me
         long long num = static_cast<long long>(dividend) / static_cast<long long>(divisor);
        if(num>INT_MAX){
            return INT_MAX;}
        else if (num<INT_MIN){
            return INT_MIN;
        }

       
        
        
        return num;
    }
};
