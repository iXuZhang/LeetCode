class Solution {
public:
    //  Awesome! 
    //  bitwise operations apply only to each bit so operations on different bits are independent of each other. 
    //  This allows us to group the corresponding bits of the 32 counters into one 32-bit integer.
    int singleNumber(vector<int>& nums) {
        int a = 0;
        int b = 0;
        int mask = 0;
        for(int i:nums){
            a ^= b&i;
            b ^= i;
            mask = ~(a&b); // if( a == 1 && b==1 ) mask = 0; else mask = 1;
            a &= mask;  // if(mask==1) a & mask = a; if(mask==0) a & mask = 0;
            b &= mask;
        }
        return b; // if the one appears twice ,return a;
    }
};