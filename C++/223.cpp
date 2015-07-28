class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area1 = (C-A) * (D-B);
        int area2 = (G-E) * (H-F);
        if(E>C||G<A||F>D||H<B) return area1 + area2;
        int length = min(C,G) - max(A,E);
        int width = min(D,H) - max(B,F);
        int common = length * width;
        return area1 + area2 - common;
    }
};