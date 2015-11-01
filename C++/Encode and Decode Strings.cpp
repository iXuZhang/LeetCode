// Encode and Decode Strings
class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string res;
        for(string s : strs)
            res += to_string(s.size()) + "@" + s; 
        return res;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){
            int j = s.find_first_of('@', i);
            int len = stoi(s.substr(i, j - i));
            res.push_back(s.substr(j+1, len));
            i = j + 1 + len;
        }
        return res;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));