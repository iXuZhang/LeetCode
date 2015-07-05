class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
        sort(nums.begin(),nums.end());
        backTracking(res, current, nums);
        return res;
    }

    void backTracking(vector<vector<int>>& res, vector<int>& current, vector<int>& nums)
    {
        if (nums.empty()) {
            res.push_back(current);
            return;
        }
        for (auto i= nums.begin(); i!=nums.end(); i++) {
            int temp = *i;
            current.push_back(*i);
            nums.erase(i);
            backTracking(res, current, nums);
            current.pop_back();
            nums.insert(i,temp);
            while(i+1!= nums.end() && *(i+1)==*i) ++i;
        }
    }    
};