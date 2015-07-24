class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n==0||s[0]=='0') return 0;
        int connected = 0, disconnected = 1;
        for(auto i = 1; i < n; i++){
            if(s[i]=='0'){
                if(s[i-1]!='1'&&s[i-1]!='2') return 0;
                connected = disconnected;
                disconnected = 0;
            }
            else if(s[i-1]=='1'|| (s[i-1]=='2'&& s[i]<='6')){
                int temp = disconnected;
                disconnected += connected;
                connected = temp;
            }    
            else{
                disconnected += connected;
                connected = 0;
            }
        }
        return connected + disconnected;
    }
};