// Compare Version Numbers
class Solution {
public:
    // 0ms
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        while(version1[i] != '.' && i < version1.size()) i++;
        while(version2[j] != '.' && j < version2.size()) j++;
        int temp1 = stoi(version1.substr(0,i));
        int temp2 = stoi(version2.substr(0,j));
        if(temp1 > temp2) return 1;
        if(temp1 < temp2) return -1;
        if(i == version1.size() && j == version2.size()) return 0;
        if(i == version1.size()) version1 = "0";
        else version1 = version1.substr(i+1);
        if(j == version2.size()) version2 = "0";
        else version2 = version2.substr(j+1);
        return compareVersion(version1, version2);
    }
};