class Solution {
public:
    int compareVersion(string version1, string version2) {
        if(version1.empty() && version2.empty()) return 0;
        int i = 0, j = 0;
        while(i < version1.size() && version1[i] != '.') i++;
        while(j < version2.size() && version2[j] != '.') j++;
        int v1 = i ? stoi(version1.substr(0,i)) : 0;
        int v2 = j ? stoi(version2.substr(0,j)) : 0;
        if(v1 > v2) return 1;
        if(v1 < v2) return -1;
        if(version1[i] == '.') i++;
        if(version2[j] == '.') j++;
        return compareVersion(version1.substr(i),version2.substr(j));
    }
};