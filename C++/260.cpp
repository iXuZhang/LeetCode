class Solution {
public:
    /* Time:O(n)    Space:O(1)
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res = {0,0};
        int diff = 0; for(int n:nums) diff ^= n; // 0 ^ x = x;
        diff &= ~(diff - 1); // find a different bit, the last right
        for(int num:nums)
            if(num & diff) res[0] ^= num; 
            else res[1] ^= num;
        return res;
    }
    */
    
    // Consice Solution
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res(2,0);
        int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        diff &= -diff;// complement
        for(int num:nums) res[!(num & diff)] ^= num;
        return res;
    }
};