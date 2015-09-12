class Solution {
public:
    //Boyer–Moore majority vote algorithm
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int a = 0, b = 0; // count = 0, it does not matter
        int countA = 0, countB = 0;
        for(int num : nums){
            if(num == a) countA ++;
            else if(num == b) countB ++;
            else if(countA == 0){
                a = num;
                countA = 1;
            }
            else if(countB == 0){
                b = num;
                countB = 1;
            }
            else{
                countA--;
                countB--;
            }
        }
        countA = countB = 0;
        for(int num : nums)
            if(num == a) countA++;
            else if(num == b) countB++;
        if(countA > nums.size()/3) res.push_back(a);
        if(countB > nums.size()/3) res.push_back(b);
        return res;
    }
};