class Solution {
public:
    // haystack = "mississippi", needle = "issip"
    int strStr(string haystack, string needle) {
        int l1 = haystack.size(), l2 = needle.size();

        int startIndex = -1;

        if (l2 > l1)
            return startIndex;
        int index1 = 0, index2 = 0;

        while (index1 < l1) {
            if (haystack[index1] == needle[index2]) {

                index2++;
            } else {

                index1 = index1 - index2;
                index2 = 0;
            }
            if (index2 >= l2) {
                return index1 - index2 + 1;
            }
            index1++;
        }
        return startIndex;
    }
};

// haystack = "sadbutsad", needle = "sad"
// haystack = "sbutsad", needle = "sad"
