// Read N Characters Given Read4
// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
    int read(char *buf, int n) {
        int res = 0;
        int curr = 1;
        while(curr && res <= n){
            curr = read4(buf + res);
            res += curr;
        }
        return min(res, n);
    }
};