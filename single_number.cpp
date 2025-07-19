#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<nums.size();i++){
            ans ^= nums[i];
        }
        return ans; // The single number is the result of XORing all elements
    }
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> countMap;
        for(int i=0;i<n;i++){
            countMap[nums[i]]++;
        }
        for(auto it :countMap){
            if(it.second == 1) {
                return it.first; // Return the number that appears only once
            }
        }
        return -1; 
    }
};