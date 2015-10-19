// Meeting Rooms II
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    // greedy : always change the smallest end time;
    // heap : min_heap
    // sort : sort the intervals by start time O(nlogn)
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](Interval &i, Interval &j){return i.start < j.start;});
        priority_queue<int, vector<int>, greater<int>> min_heap;
        for(auto interval : intervals){
            if(!min_heap.empty() && min_heap.top() <= interval.start) min_heap.pop();
            min_heap.push(interval.end);
        }
        return min_heap.size();
    }
};