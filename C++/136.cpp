class Solution {
public:
/*Slow Version
    int singleNumber(vector<int>& nums) {
        set<int> nset;
        for(int n: nums){
            if(nset.find(n) == nset.end()){
                nset.insert(n);
            }
            else{
                nset.erase(n);
            }
        }
        return *nset.begin();
    }
*/
/*Version Slow
    int singleNumber(vector<int>& nums) {
        map<int,bool> numsmap;
        for(int n:nums){
            if(numsmap.find(n) == numsmap.end()){
                numsmap[n] = true;
            }
            else{
                numsmap[n] = false;
            }
        }
        for(auto iterator = numsmap.begin(); iterator != numsmap.end(); iterator++){
            if(iterator->second == true){
                return iterator->first;
            }
        }
    }
*/
//Version 3 O(n)without using extro memory - Fast - Bit Manipulation XOR
    int singleNumber(vector<int>& nums) {
        //if(nums.empty()) return 0;
        int single = 0; // 0^num = num
        for(int n : nums)
            single ^= n;
        return single;
    }    
};
