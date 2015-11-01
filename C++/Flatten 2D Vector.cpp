// Flatten 2D Vector
class Vector2D {
public:
    Vector2D(vector<vector<int>>& vec2d) {
        begin = vec2d.begin();
        end = vec2d.end();
        if(!vec2d.empty()) 
            curr = vec2d.begin()->begin();
    }

    int next() {
        if(!hasNext()) return -1;
        return *curr++;
    }

    bool hasNext() {
        while(begin != end && curr == begin->end())
          curr = (++begin)->begin();
        if(begin == end) return false;
        return true;
    }
    
private:
    vector<int>::iterator curr;
    vector<vector<int>>::iterator begin;
    vector<vector<int>>::iterator end;
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */