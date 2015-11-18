// Walls and Gates
class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        if(rooms.empty()) return;
        const int m = rooms.size();
        const int n = rooms[0].size();
        vector<pair<int,int>> table;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(rooms[i][j] == 0) table.push_back(make_pair(i,j));
        while(!table.empty()){
            vector<pair<int,int>> temp;
            for(auto index : table){
                int i = index.first;
                int j = index.second;
                if( j + 1 < n && rooms[i][j+1] > rooms[i][j] + 1){
                    rooms[i][j+1] = rooms[i][j] + 1;
                    temp.push_back(make_pair(i,j+1));
                }
                if( j - 1 >= 0 && rooms[i][j-1] > rooms[i][j] + 1){
                    rooms[i][j-1] = rooms[i][j] + 1;
                    temp.push_back(make_pair(i,j-1));
                }
                if( i + 1 < m && rooms[i+1][j] > rooms[i][j] + 1){
                    rooms[i+1][j] = rooms[i][j] + 1;
                    temp.push_back(make_pair(i+1,j));
                }
                if( i - 1 >= 0 && rooms[i-1][j] > rooms[i][j] + 1){
                    rooms[i-1][j] = rooms[i][j] + 1;
                    temp.push_back(make_pair(i-1,j));
                }                
            }
            table = temp;
        }
    }
};