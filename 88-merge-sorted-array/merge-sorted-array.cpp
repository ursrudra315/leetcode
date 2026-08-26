class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums11;
        for(int i = 0 ; i < m ; i++){
            nums11.push_back(nums1[i]);
        }
        for(int i = 0 ; i < n ; i++){
            nums11.push_back(nums2[i]);
        }
        sort(nums11.begin(), nums11.end());
        nums1.clear();

        for(int i = 0 ; i<m + n ; i++){
            nums1.push_back(nums11[i]);
        }
    }
};