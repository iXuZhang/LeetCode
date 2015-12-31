// Happy Number
class Solution {
public:
    /* set
    bool isHappy(int n) {
        unordered_set<int> table;
        while(n != 1){
            if(table.count(n) > 0) return false;
            table.insert(n);
            int temp = 0;
            while(n){
                temp += (n%10)*(n%10);
                n /= 10;
            }
            n = temp;
        }
        return true;
    }
    */ 
    
    // O(1) space, find a circle
    bool isHappy(int n) {
        int slow = n;
        int fast = sqrDigit(n);;
        while(fast != slow){
            slow = sqrDigit(slow);
            fast = sqrDigit(fast);
            fast = sqrDigit(fast);
        }
        return fast == 1;
    }
    
private:
    int sqrDigit(int n){
        int res = 0;
        while(n){
            res += (n%10)*(n%10);
            n /= 10;
        }
        return res;
    }
};