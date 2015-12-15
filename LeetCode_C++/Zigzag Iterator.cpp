// Zigzag Iterator
class ZigzagIterator {
public:
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        v = {v1, v2};
        for(auto i = v.begin(); i != v.end(); ++i)
            if(i->begin() != i->end()) table.push(make_pair(i->begin(),i->end()));
    }

    int next() {
        int res = *(table.front().first);
        ++table.front().first;
        if(table.front().first != table.front().second) table.push(table.front());
        table.pop();
        return res;
    }

    bool hasNext() {
        return !table.empty();
    }
    
private:
    vector<vector<int>> v; 
    queue<pair<vector<int>::iterator, vector<int>::iterator>> table;
    
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator i(v1, v2);
 * while (i.hasNext()) cout << i.next();
 */