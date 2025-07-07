#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, maxLength = 0, zeroCount = 0;

        for (int r = 0; r < nums.size(); ++r) {
            if (nums[r] == 0) {
                zeroCount++;
            }
            while (zeroCount > k) {
                if (nums[l] == 0) {
                    zeroCount--;
                }
                l++;
            }
            maxLength = max(maxLength, r - l + 1);
        }

        return maxLength;
    }
};