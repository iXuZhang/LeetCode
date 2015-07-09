class Solution {
public:
    string simplifyPath(string path) {
        vector<string> pathstack;
        string res,curr;
        for(auto iter = path.begin(); iter!= path.end(); ++iter){
            curr += *iter;
            if(iter+1 == path.end() || *(iter+1) == '/'){
                if(curr == "/.." && !pathstack.empty()) pathstack.pop_back();
                else if(curr == "/" || curr =="/." || curr =="/..");
                else pathstack.push_back(curr);
                curr = "";
            }
        }
        for(auto i:pathstack) res += i;
        return res.empty() ? "/":res;
    }
};