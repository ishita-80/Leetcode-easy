class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
    vector<int>ans;
    for(int num= left;num<=right;num++){
        if(num%10==0){
        continue;
        }
        int temp=num;
        int flag=1;

    
    while( temp>0){
        int digit = temp%10;
        if(digit==0 || num%digit!=0){
            flag=0;
            break;
        }
        temp/=10;
    }
    if(flag){
        ans.push_back(num);
    }

    }
      return ans;
    }
  
    
};
