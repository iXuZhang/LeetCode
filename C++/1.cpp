class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mymap;
        for(int i=0;i < nums.size();i++){
            if(mymap.find(nums[i]) != mymap.end()){
                return {mymap[nums[i]],i+1};
            }
            mymap[target - nums[i]] = i + 1;
        }
    }
};