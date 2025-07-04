#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int m= t.length();
        int n = s.length();
        int l=0,r=0,minlen= INT_MAX,cnt =0,sindex=-1;
        unordered_map<char,int> mp;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }
        while(r<n){
            if(mp[s[r]] > 0){
                cnt++;
            }
            mp[s[r]]--;
            while(cnt == m){
                if(r-l+1 < minlen){
                    minlen = r-l+1;
                    sindex = l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return sindex == -1 ?"" : s.substr(sindex,minlen);
    }
};