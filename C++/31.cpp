class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<2) return;
        auto iter = nums.rbegin();
        while(*iter<=*(iter+1)&&iter+1!=nums.rend()) ++iter;
        if(iter+1==nums.rend()){
            reverse(nums.begin(),nums.end());
            return;
        }
        auto min = iter;// it has to be iter
        for(auto i = nums.rbegin(); i!=iter+1; ++i) if(*i<*min &&*i>*(iter+1)) min=i;
        swap(*min,*(iter+1));
        sort(nums.rbegin(),iter+1,greater<int>());
    }
};