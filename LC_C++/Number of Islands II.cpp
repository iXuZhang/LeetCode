// Number of Islands II
class Solution {
public:
    // union(A, B) - merge A's set with B's set
    // find(A) - finds what set A belongs to
    vector<int> numIslands2(int m, int n, vector<pair<int, int>>& positions) {
        vector<vector<pair<int, int>>> table(m, vector<pair<int, int>>(n, make_pair(-1,-1)));
        vector<int> res;
        int num = 0;
        for(auto p : positions){
            int i = p.first, j = p.second;
            table[i][j] = make_pair(i, j);
            num++;
            pair<int, int> root;
            root = findRoot(table, i + 1, j);
            unionIslands(table, i, j, root.first, root.second, num);
            root = findRoot(table, i - 1, j);
            unionIslands(table, i, j, root.first, root.second, num);
            root = findRoot(table, i, j + 1);
            unionIslands(table, i, j, root.first, root.second, num);
            root = findRoot(table, i, j - 1);
            unionIslands(table, i, j, root.first, root.second, num);
            res.push_back(num);
        }
        return res;
    }
    
private:
    pair<int, int> findRoot(vector<vector<pair<int, int>>>& table, int i, int j){
        if(i == table.size() || i < 0 || j == table[0].size() || j < 0 || table[i][j].first == -1) return make_pair(-1,-1);
        if(i == table[i][j].first && j == table[i][j].second) return table[i][j];
        else return findRoot(table, table[i][j].first, table[i][j].second);
    }

private:
    void unionIslands(vector<vector<pair<int, int>>>& table, int i1, int j1, int i2, int j2, int& num){
        if(i2 == -1 || i1 == i2 && j1 == j2) return;
        table[i2][j2] = make_pair(i1, j1);
        num--;
    }
};