#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int m= t.length();
        int n = s.length();
        int l=0,r=0,minlen= INT_MAX,cnt =0,sindex=-1;
        unordered_map<char,int> mpp;
        for(int i=0;i<m;i++){
            mpp[t[i]]++;
        }
        while(r<n){
            if(mpp[s[r]] > 0){
                cnt++;
            }
            mpp[s[r]]--;
            while(cnt == m){
                if(r-l+1 < minlen){
                    minlen = r-l+1;
                    sindex = l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return sindex == -1 ?"" : s.substr(sindex,minlen);
    }
};