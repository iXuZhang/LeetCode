// Find the Celebrity
// Forward declaration of the knows API.
bool knows(int a, int b);

class Solution {
public:
    int findCelebrity(int n) {
        if(n <= 1) return 0;
        int celebrity = 0;
        // find the possible celebrity
        for(int i = 1; i < n; i++){
            if(knows(celebrity,i))
                celebrity = i;
        }
        for(int i = 0; i < n; i++){
            if(i != celebrity && (knows(celebrity, i) ||!knows(i, celebrity))) return -1;
        }
        return celebrity;
    }
};