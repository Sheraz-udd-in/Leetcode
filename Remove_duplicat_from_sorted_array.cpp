#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int i=0;
        for(int j=1;j<n;i++){
            if(arr[j] != arr[i]){
                i++;
                arr[i]= arr[j];
            }
        }
        return i+1;
    }
};