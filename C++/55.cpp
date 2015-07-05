class Solution {
public:
    bool canJump(vector<int>& nums) {
        //nums.insert(nums.begin(),0);
        if(nums.size()<2) return true;
        if(nums.front()==0) return false;
        for(auto i = nums.begin()+1; i!=nums.end()-1; ++i){
           *i = max(*(i-1)-1,*i);
           if(*i == 0) return false;
        }
        return true;
    }
};