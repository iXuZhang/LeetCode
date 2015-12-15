// Meeting Rooms
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
    //sort O(nlogn) 588ms
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](Interval &i, Interval &j){return i.start < j.start;});
        for(auto i = 0; i + 1 < intervals.size(); i++)
            if(intervals[i].end > intervals[i+1].start) return false;
        return true;
    }
};