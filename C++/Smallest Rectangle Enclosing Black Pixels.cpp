// Smallest Rectangle Enclosing Black Pixels
class Solution {
public:
    int minArea(vector<vector<char>>& image, int x, int y) {
        int lenMax = INT_MIN;
        int lenMin = INT_MAX;
        int widthMax = INT_MIN;
        int widthMin = INT_MAX;
        DFS(image, x, y, lenMax, lenMin, widthMax, widthMin);
        return (lenMax - lenMin + 1) * (widthMax - widthMin + 1);
    }
    
    void DFS(vector<vector<char>>& image, int x, int y, int& lenMax, int& lenMin, int& widthMax, int& widthMin){
        if(x < 0 || x >= image.size() || y < 0 || y >= image[0].size() || image[x][y] != '1') return;
        image[x][y] = '#';
        lenMax = max(lenMax, x);
        lenMin = min(lenMin, x);
        widthMax = max(widthMax, y);
        widthMin = min(widthMin, y);
        DFS(image, x+1, y, lenMax, lenMin, widthMax, widthMin);
        DFS(image, x-1, y, lenMax, lenMin, widthMax, widthMin);
        DFS(image, x, y+1, lenMax, lenMin, widthMax, widthMin);
        DFS(image, x, y-1, lenMax, lenMin, widthMax, widthMin);
    }
};