class Solution {
public:
    bool isHappy(int n) {
        
     
        while(n>9){
            long long sq_digi = 0;
            int digit=0;
            while(n>=1){

                digit=n%10;

                sq_digi += pow(digit,2);
                n/=10;
            }
            n=sq_digi;
        }
        //edge point 7 7 is also a happy number
        if(n==1 || n==7){
        return true;}
        return false;
    }
};
