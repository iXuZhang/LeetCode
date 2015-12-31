// Read N Characters Given Read4 II - Call multiple times
// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
     // "ab" [read(1),read(2)] -> ["a","b"]
     // read from a file and write to *buf, the mark of file will not change
     // when n < len, will read 1-4 characters
     // when len < n, there are no characters
    int read(char *buf, int n) {
        int len = 0;
        int curr = 4;
        while(!table.empty() && len < n){
            buf[len++] = table.front();
            table.pop();
        }
        while(curr == 4 && len < n){
            curr = read4(buf + len);
            len += curr;
        }
        for(int i = n; i < len; i++)    // buf[n] -> buf[len-1]
            table.push(buf[i]);
        return min(len, n);
    }

private:
    queue<char> table;
};