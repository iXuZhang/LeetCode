//Alien Dictionary
class Solution {
public:
    string alienOrder(vector<string>& words) {
        unordered_map<char, unordered_set<char>> graph;
        unordered_map<char, int> indegree;
        int n = words.size();
        for(int i = 0; i < n; i++){
            for(char c : words[i]){graph[c]; indegree[c];} 
            for(int j = 0; i < n - 1 && j < words[i].size() && j < words[i+1].size(); j++){
                if(words[i][j] != words[i+1][j]){
                    graph[words[i][j]].insert(words[i+1][j]);
                    indegree[words[i+1][j]]++;
                    break;
                }
            }
        }
        string res;
        for(int k = 0; k < indegree.size(); k++){
            auto i = indegree.begin();
            while(i != indegree.end() && i->second != 0) ++i;
            if(i == indegree.end()) return "";
            for(char c : graph[i->first])
                indegree[c]--;
            indegree[i->first] = -1;
            res += i->first;
        }
        return res;
    }
};