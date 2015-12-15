// Jump Game
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ability = 1;
        for(int n : nums){
            if(ability == 0) return false;
            ability = max(ability-1, n);
        }
        return true;
    }
};