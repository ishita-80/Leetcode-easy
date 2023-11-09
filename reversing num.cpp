#include<iostream>
#include<limits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n != 0){
        if(ans > INT32_MAX/10 || ans < INT32_MIN/10){
            ans = 0;
            break;
        }
       int digit = n%10;
        ans=(ans*10)+digit;
        n=n/10;
       

    } cout << ans;
}
