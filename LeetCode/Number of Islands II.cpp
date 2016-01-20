// Number of Islands II
class Solution {
public:
    vector<int> numIslands2(int m, int n, vector<pair<int, int>>& positions) {
        vector<int> res;
        int count = 0;
        vector<vector<Label*>> table(m,vector<Label*>(n, NULL));
        for(pair<int,int> p : positions){
            int i = p.first;
            int j = p.second;
            if(table[i][j]) continue;
            count += 1;
            table[i][j] = new Label(i,j, 1);
            unionLabel(findLabel(table,i, j), findLabel(table,i+1, j), count);
            unionLabel(findLabel(table,i, j), findLabel(table,i-1, j), count);
            unionLabel(findLabel(table,i, j), findLabel(table,i, j+1), count);
            unionLabel(findLabel(table,i, j), findLabel(table,i, j-1), count);
            res.push_back(count);
        }
        return res;
    }
    
    struct Label{
        int i;
        int j;
        int depth;
        Label(int x, int y, int z): i(x), j(y), depth(z){}
    };
    
    void unionLabel(Label* l1, Label* l2, int& count){
        if(!l1 || !l2 || l1 == l2 ) return;
        if(l1->depth >= l2->depth){
            l2->i = l1->i;
            l2->j = l1->j;
            if(l1->depth == l2->depth) l1->depth++;
        }
        else{
            l1->i = l2->i;
            l1->j = l2->j;
        }
        count--;
    }
    
    Label* findLabel(vector<vector<Label*>>& table, int i, int j){
        if(i < 0||i >= table.size()||j < 0||j >= table[0].size()||!table[i][j]) return NULL;
        if(table[i][j]->i == i && table[i][j]->j == j) return table[i][j];
        else return findLabel(table, table[i][j]->i, table[i][j]->j);
    }
};