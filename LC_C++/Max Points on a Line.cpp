// Max Points on a Line
/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        int res = 0;
        const int n = points.size();
        for(int i = 0; i < n; i++){
            Point curr = points[i];
            unordered_map<double, int> slope;
            int infinite = 0, num = 1;
            for(int j = i+1; j < n; j++){ // from i + 1
                double a = curr.y - points[j].y;
                double b = curr.x - points[j].x;
                if(!a & !b) num++;
                else if(!b) infinite++;
                else slope[a/b]++;
            }
            for(auto k = slope.begin(); k != slope.end(); ++k)
                res = max(res, k->second + num);
            res = max(res, infinite + num);
        }
        return res;
    }
};