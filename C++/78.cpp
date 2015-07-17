class Solution {
public:
    // 4ms~
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> curr;
        int k = 0;
        while(k<= nums.size()) // k length, i position
        backTracking(res,curr,nums,0,k++);
        return res;
    }
    
    void backTracking(vector<vector<int>>& res, vector<int>& curr, vector<int>& nums, int i,int k){
        if(k==0) res.push_back(curr);
        else for(;i<nums.size();i++){
            curr.push_back(nums[i]);
            backTracking(res,curr,nums,i+1,k-1);
            curr.pop_back();
        }
    }
};