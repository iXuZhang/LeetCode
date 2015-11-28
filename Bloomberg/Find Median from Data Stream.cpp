/*
海量live stream的数字，求median
*/

key:
maximum heap and minimum heap

class MedianFinder {
public:
    // Adds a number into the data structure.
    void addNum(int num) {
        if(min_heap.empty() && max_heap.empty()) max_heap.push(num);
        else if(num < max_heap.top()) max_heap.push(num);
        else min_heap.push(num);
        int m = max_heap.size();
        int n = min_heap.size();
        if(m - n > 1){
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
        else if(n - m > 1){
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }

    // Returns the median of current data stream
    double findMedian() {
        if(min_heap.size() < max_heap.size())
            return max_heap.top();
        if(min_heap.size() > max_heap.size())
            return min_heap.top();
        return min_heap.top()/2.0 + max_heap.top()/2.0;
    }
    
private:
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
};