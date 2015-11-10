// Insert Interval
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
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        vector<Interval> res;
        auto i = intervals.begin();
        for(; i != intervals.end(); ++i){
            if(newInterval.end < i->start)
                break;
            if(newInterval.end < i->start || newInterval.start > i->end)
                res.push_back(*i);
            else{
                newInterval.start = min(newInterval.start, i->start);
                newInterval.end = max(newInterval.end, i->end);
            }
        }
        res.push_back(newInterval);
        res.insert(res.end(),i,intervals.end());
        return res;
    }
};