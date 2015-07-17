class Solution {
public:
    // O(1) Space One pass three pointers swap 4ms
    void sortColors(vector<int>& nums) {
        //return sort(nums.begin(),nums.end()); 4ms
        int head = 0;
        int tail = nums.size()-1;
        int curr = 0;
        while(curr<=tail)
            if(nums[curr]==0)
                swap(nums[curr++], nums[head++]);
            else if(nums[curr]==2)
                swap(nums[curr],nums[tail--]);
            else curr++;
    }
};