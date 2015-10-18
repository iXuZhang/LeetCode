// Shortest Word Distance II
class WordDistance {
public:
    WordDistance(vector<string>& words) {
        const int n = words.size();
        for(int i = 0; i < n; i++)
            table[words[i]].push_back(i);
    }

    int shortest(string word1, string word2) {
        int res = INT_MAX;
        int i = 0, j = 0;
        vector<int> table1 = table[word1];
        vector<int> table2 = table[word2];
        // Do not iterate all members
        while(i < table1.size() && j < table2.size()){ 
            res = min(res, abs(table1[i] - table2[j]));
            table1[i] < table2[j] ? i++ : j++;
        }
        return res;
    }
private:
    unordered_map<string, vector<int>> table;