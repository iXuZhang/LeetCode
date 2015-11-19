// Two Sum III - Data structure design
class TwoSum {
public:

    // Add the number to an internal data structure.
	void add(int number) {
	   nums[number]++;
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
	    for(auto i = nums.begin(); i != nums.end(); ++i){
	        if(nums.count(value - i->first) > 0){
	            if(value - i->first != i->first) return true;
	            if(nums[value - i->first] > 1) return true;
	        }
	    }
	    return false;
	}
	
private:
    unordered_map<int, int> nums;
};


// Your TwoSum object will be instantiated and called as such:
// TwoSum twoSum;
// twoSum.add(number);
// twoSum.find(value);