class Solution {
public:
    /* version 1 16ms
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
        backTracking(current,nums,res);
        return res;
    }
    
    void backTracking(vector<int>& current, vector<int>& nums, vector<vector<int>> &res){
        if(nums.empty()){
            res.push_back(current);
            return;
        } 
        for(auto n=nums.begin();n!=nums.end();++n){
            current.push_back(*n);
            int temp = *n;
            nums.erase(n);
            backTracking(current,nums,res);
            current.pop_back();
            nums.insert(n,temp);
        }
    }
    */
    
    //version 2 12ms  swap only
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backTracking(res, nums, 0);
        return res;
    }

    void backTracking(vector<vector<int>>& res, vector<int>& nums, int begin)
    {
        if (begin == nums.size()) {
            res.push_back(nums);
            return;
        }
        for (int i=begin; i!=nums.size(); i++) {
            swap(nums[i], nums[begin]);
            backTracking(res, nums, begin+1);
            swap(nums[i], nums[begin]);
        }
    }    
};