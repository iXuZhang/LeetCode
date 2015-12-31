// Simplify Path
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> table;
        string curr;
        path += "/";
        istringstream ss(path);
        while(getline(ss, curr, '/')){
            if(curr != "." && curr != ".." && curr != "") table.push(curr);
            else if(curr == ".." && !table.empty()) table.pop();
        }
        while(!table.empty()){
            curr = "/" + table.top() + curr;
            table.pop();
        }
        return curr.empty() ? "/" : curr;
    }
};