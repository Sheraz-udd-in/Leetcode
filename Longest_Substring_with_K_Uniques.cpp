#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n = s.length();
        int l=0,r=0,maxlen=0;
        unordered_map<char,int> mp;
        while(r<n){
            mp[s[r]]++;
            if(mp.size() > k){
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }
            if(mp.size() == k){
                maxlen = max(maxlen,r-l+1);
            }
            r++;
        }
        if(maxlen >0){
            return maxlen;
        }
        return -1;
    }
};