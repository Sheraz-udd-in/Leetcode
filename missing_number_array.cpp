#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // int totalSum = (n * (n + 1)) / 2; // Sum of first n natural numbers
        // int arraySum = accumulate(nums.begin(), nums.end(), 0); // Sum of elements in the array
        // return totalSum - arraySum; // The missing number is the difference
        int xor_all =0;
        for(int i=0; i<n; i++){
            xor_all ^= nums[i];
        }
        int xor_full = 0;
        for(int i=0; i<=n; i++){
            xor_full ^= i;
        }
        return xor_all ^ xor_full; // The missing number is the XOR of both results
    }
};
