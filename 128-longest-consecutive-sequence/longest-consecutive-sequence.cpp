class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int one = 0 ;
        int two = 1;
        int ans = 0;
        int maxsum = 0;
        if(nums.empty()){return 0;}
        while(two<nums.size()){
            if(nums[one]!=nums[two]){
            if(nums[two]==nums[one] + 1){
                two++;
                one++;
                ++ans;
                maxsum = max(maxsum, ans);

            }
            else{
                two++;
                one++;
                ans = 0;
            }}
            else{
                one++;
                two++;
            }
        }
        return maxsum+1;
    }
};