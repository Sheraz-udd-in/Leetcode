#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         map<char, int> mp;
//         int i=0, j=0, ans=0;
//         while(j<n){
//             mp[s[j]]++;
//             while(i<j && mp.size()<j-i+1){
//                 mp[s[i]]--;
//                 if(mp[s[i]]==0) mp.erase(s[i]);
//                 i++;
//             }
//             if(mp.size()==j-i+1) ans = max(ans, j-i+1);
//             j++;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int maxlen =0,l=0;
        for(int r=0;r<s.length();r++){
            if(mp.count(s[r]) && mp[s[r]] >= l){
                l = mp[s[r]]+1;
            }
            mp[s[r]]=r;
            maxlen = max(maxlen,r-l+1);
        }
        return maxlen;
    }
};