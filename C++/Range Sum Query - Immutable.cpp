// Range Sum Query - Immutable
class NumArray {
public:
    NumArray(vector<int> &nums) {
        table.push_back(0);
        for(int num : nums){
            table.push_back(table.back() + num);
        }
    }

    int sumRange(int i, int j) {
        return table[j+1] - table[i];
    }

private:
    vector<int> table;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);