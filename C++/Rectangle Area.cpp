// Rectangle Area
class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int Area1 = (C - A)*(D - B);
        int Area2 = (G - E)*(H - F);
        if(E >= C || F >= D || G <= A || H <= B) return Area1 + Area2;
        int Area3 = (min(C,G) - max(A,E))*(min(D,H) - max(B,F));
        return Area1 + Area2 - Area3;
    }
};