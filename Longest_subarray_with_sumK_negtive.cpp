#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int maxlen =0,sum=0;
        map<int,int> presum ;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if( sum == k){
                maxlen = max(maxlen,i+1);
            }
            int rem = sum -k;
            if(presum.find(rem) != presum.end()){
                int l = i - presum[rem];
                maxlen = max(maxlen,l);
            }
            if(presum.find(sum) == presum.end()){
                presum[sum] = i;
            }
        }
        return maxlen;
    }
};