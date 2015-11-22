// Kth Largest Element in an Array
class Solution {
public:
    // sort O(nlogn);
    // heap O(nlogk);
    // selection algorithm based on quicksort n;
    
    /* heap
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, std::greater<int>> min_heap;
        for(int num : nums){
            if(min_heap.size() < k || num > min_heap.top()) min_heap.push(num);
            if(min_heap.size() > k) min_heap.pop();
        }
        return min_heap.top();
    }
    */
    
    // selection algorithm based on quicksort O(n)
    int findKthLargest(vector<int>& nums, int k) {
        const int n = nums.size();
        return findKth(nums, 0, n-1, n-k+1);
    }
    
private:
    int findKth(vector<int>& nums, int i, int j, int k){
        int pivot = nums[i];
        int s = partition(nums, i, j, pivot);
        int m = s - i + 1; // number from i to s;
        if(k == m) return nums[s];
        else if(k > m) return findKth(nums, s+1, j, k-m);
        return findKth(nums, i, s-1, k);
    }
    
    // after partition: nums[left+1] > pivot && nums[left] = pivot
    int partition(vector<int>& nums, int left, int right, int pivot){
        while(left < right){
            if(nums[left] < pivot) left++;
            else if(nums[right] > pivot) right--;
            else{
                swap(nums[left],nums[right]);
                if(nums[left] == pivot && nums[right] == pivot) left++;
            }
        }
        return left;
    }
};