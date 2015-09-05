class Solution {
public:
    // 8 ms;
    int trap(vector<int>& height) {
        int res = 0;
        int pos = distance(height.begin(),max_element(height.begin(),height.end()));
        for(int i = 0, max = 0; i < pos; i++){
            if(height[i] > max) max = height[i];
            else res += max - height[i];
        }
        for(int i = height.size() - 1, max = 0; i > pos; i--){
            if(height[i] > max) max = height[i];
            else res += max - height[i];
        }
        return res;
    }
};