#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int l=0,r=0,maxlen=0,maxf=0;
        vector<int>mp(26,0);
        while(r<n){
            mp[s[l]-'A']++;
            maxf = max(maxf,(r-l+1));
            while((r-l+1)-maxf >k){
                mp[s[l]-'A']--;
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};