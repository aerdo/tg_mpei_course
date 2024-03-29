//https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> check;
        if (nums1.size()>nums2.size()){
            for (int i=0; i<nums1.size(); i++){
                check.insert(nums1[i]);
            }
            for (int i=0; i<nums2.size(); i++){
                if (check.count(nums2[i])==1){
                    ans.push_back(nums2[i]);
                    check.erase(nums2[i]);
                }
                    
            }
        }else{
            for (int i=0; i<nums2.size(); i++){
                check.insert(nums2[i]);
            }
            for (int i=0; i<nums1.size(); i++){
                if (check.count(nums1[i])==1){
                    ans.push_back(nums1[i]);
                    check.erase(nums1[i]);
                }
                    
            }
        }
        return ans;
    }
};