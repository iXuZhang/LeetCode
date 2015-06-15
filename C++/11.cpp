class Solution {
public:
    int maxArea(vector<int>& height) {
    int res = 0;
    int left = 0;
    int right = height.size() - 1;
    while(left != right){
        if(height[left] > height[right]){
            if(height[right]*(right-left) > res) res = height[right]*(right-left);
            right--;
        }
        else{
            if(height[left]*(right-left) > res) res = height[left]*(right-left);
            left++;
        }
    }
    return res;
    }
};