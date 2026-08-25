class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k = k % nums.size();

        vector<int> nums1 = nums;
        int second = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(i < nums.size() - k) {
                nums[i + k] = nums1[i];
            }
            else {
                nums[second] = nums1[i];
                second++;
            }
        }
    }
};