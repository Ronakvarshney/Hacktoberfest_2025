class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long sum =0;
        long long mini = INT_MAX;
        long long maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(mini > nums[i]){
                mini = nums[i];
            }
            if(maxi < nums[i]){
                maxi = nums[i];
            }
        }
        while(k--){
            sum += (maxi - mini);
        }
        return sum ;
    }
};
