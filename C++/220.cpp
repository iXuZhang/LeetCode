class Solution {
public:
    /* O(N) use bucket to do a range check, a bucket mapping:num / (t + 1)
    // use t + 1 as the bucket size to get rid of the case when t == 0
    // negative ints are allowed, so XX - INT_MIN
    // A k window
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if(k < 1 || t < 0) return false;
        map<long,long> table;
        for(int i = 0; i != nums.size(); i++){
            long mappedNum = (long)nums[i] - INT_MIN;
            long bucket = mappedNum / ((long)t + 1);
            if(table.find(bucket) != table.end() || (table.find(bucket+1) != table.end() && table[bucket + 1] - mappedNum <= t) 
                || (table.find(bucket-1) != table.end() && mappedNum - table[bucket - 1] <= t))
                return true;
            if(table.size() >= k){
                long toRemove = ((long)nums[i - k] - INT_MIN)/((long)t + 1); 
                table.erase(toRemove); 
            } 
            table[bucket] = mappedNum;
        }
        return false;
    }
    */
    
    // Set function not a map!! O(Nlog(N))
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<int> window; // set is in order!!
        for(int i = 0; i < nums.size(); i++) {
            if(i > k) window.erase(nums[i-k-1]); // difference between i and j is at most k, so j >= i - k
            auto pos = window.lower_bound(nums[i] - t); // x >= nums[i] - t
            if (pos != window.end() && *pos - nums[i] <= t) // x <= nums[i] + t
                   return true;
            window.insert(nums[i]);
        }
        return false;
    }    
};