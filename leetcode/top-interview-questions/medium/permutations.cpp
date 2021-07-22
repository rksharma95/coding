/*
solution is based on backtracking
time complexity: O(n!)
*/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        per(res, nums, 0, n);
        return res;
    }
    
    void per(vector<vector<int>> & res, vector<int>& nums, int i, int n){
        res.push_back(nums);
        for(;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(nums[i], nums[j]);
                per(res, nums, i+1, n);
                swap(nums[i], nums[j]);    
            }
            
        }
    }
};