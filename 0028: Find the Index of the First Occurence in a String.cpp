class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length(), n = needle.length(), p;
        if (h == n) return (haystack == needle)? 0: -1;
        if (h > n) {
            p = h - n + 1;
            for (int i=0; i<p; i++){
                if (needle == haystack.substr(i, n)) return i;
            }
        }   
        return -1;
    }
};
