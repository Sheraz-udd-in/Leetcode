#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int xyz[3] = {-1, -1, -1};
        int count = 0, right = 0;
        while (right < s.length()) {
            xyz[s[right] - 'a'] = right;
            int minIndex = INT_MAX;
            for (int i = 0; i < 3; i++) {
                minIndex = min(minIndex, xyz[i]);
            }
            count += (minIndex + 1);
            right++;
        }
        return count;
    }
};