// Container With Most Water
class Solution {
public:
    // two pointers, like Buckets effect
    // [left, a, b, c, right]
    // if left < right, then (left, a), (left,b), (left,c) all< (left,right) 
    int maxArea(vector<int>& height) {
        int maxVal = 0;
        int left = 0;
        int right = height.size() - 1;
        while(left < right){
            int curr = min(height[right], height[left])*(right-left);
            if(curr > maxVal) maxVal = curr;
            if(height[left] > height[right]) right--;
            else left++;
        }
        return maxVal;
    }
};