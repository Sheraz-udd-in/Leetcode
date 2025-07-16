#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
        vector<int> unionOfSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            set<int> resultSet;
            for (int num : nums1) {
                resultSet.insert(num);
            }
            for (int num : nums2) {
                resultSet.insert(num);
            }
            return vector<int>(resultSet.begin(), resultSet.end());
        }
    };
    vector<int> union_sorted_arrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> result;
        int i = 0, j = 0;
        while(i<n && j<m){
            if(nums1[i] <= nums2[j]){
                if(result.size() == 0 || result.back() != nums1[i]){
                    result.push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(result.size() == 0 || result.back() != nums2[j]){
                    result.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i<n){
            if(result.size() == 0 || result.back() != nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
        }
        while(j<m){
            if(result.size() == 0 || result.back() != nums2[j]){
                result.push_back(nums2[j]);
            }
            j++;
        }
        return result;
    }