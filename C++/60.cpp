class Solution {
public:
    /* Version 1 4ms
    string getPermutation(int n, int k) {
        string res;
        vector<char> nums;
        int factorial[10] = {1,1};
        for(int i=2;i<10;i++) factorial[i]=factorial[i-1]*i;
        for(int i=1;i<=n;i++) nums.push_back(char(i+'0'));
        int i = 1;
        k--;
        while(res.size()!= n){
            int temp = factorial[n-i];
            res.push_back(nums[k/temp]);
            nums.erase(nums.begin()+k/temp);
            k %= temp; 
            i++;
        }
        return res;
    }
    */
    
    // Version 2 0ms
    string getPermutation(int n, int k) {
        string res;
        vector<char> nums;
        for(int i=1;i<=n;i++) nums.push_back(char(i+'0'));
        int i = 1;
        k--;
        while(res.size()!= n){
            int temp = factorial(n-i);
            res.push_back(nums[k/temp]);
            nums.erase(nums.begin()+k/temp);
            k %= temp; 
            i++;
        }
        return res;
    }    
    
    int factorial(int n){
        if(n==0||n==1) return 1;
        return n*factorial(n-1);
    }
};