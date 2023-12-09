class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxi = nums[n-1];
        int mini = nums[0];
        for(int i=0;i<(n-1);i++){
        if((nums[i]<maxi) &&( nums[i]>mini)){
            count++;

        }}
return count;
    }
};
