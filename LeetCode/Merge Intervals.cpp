// Merge Intervals
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
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> res;
        sort(intervals.begin(), intervals.end(), [](Interval &i, Interval &j){ return i.start < j.start;});
        const int n = intervals.size();
        for(int i = 0; i < n; i++){
            if(i < n - 1 && intervals[i].end >= intervals[i+1].start){
                intervals[i+1].start = min(intervals[i].start, intervals[i+1].start);
                intervals[i+1].end = max(intervals[i].end, intervals[i+1].end);
            }
            else
                res.push_back(intervals[i]);
        }
        return res;
    }
};