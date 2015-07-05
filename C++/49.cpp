class Solution {
public:
    /* Version 1 map 64ms unordered_map 48ms
    vector<string> anagrams(vector<string>& strs) {
        vector<string> res;
        unordered_map<string,vector<string>> check;
        for(auto iter_v = strs.begin(); iter_v!=strs.end(); ++iter_v){
            string temp = *iter_v;
            sort(temp.begin(),temp.end());
            check[temp].push_back(*iter_v);
        }
        for(auto iter = check.begin(); iter != check.end(); ++iter){
            if(iter->second.size()>1) 
                res.insert(res.end(),iter->second.begin(),iter->second.end());
        }
        if(res.size()<2) return {};
        return res;
    }
    */
    
    // Version 2 iterate once unordered_map<string,vector<string>::iterator> 48ms unordered_map<string,int> table 44ms;
    vector<string> anagrams(vector<string>& strs) {
        vector<string> res;
        unordered_map<string,int> table;
        for(int i=0;i!=strs.size();++i){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            if(table.find(temp)==table.end()) table[temp]=i;
            else{
                if(table[temp]!= -1){
                    res.push_back(strs[table[temp]]);
                    table[temp]= -1;
                }
                res.push_back(strs[i]);
            }
        }
        return res;
    }
};