#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        int ans = -1;
        int j = 0;
        unordered_map<char,int> a;
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
            if(a.size()>k){
                a[s[j]]--;
                if(a[s[j]]==0) a.erase(s[j]);
                j++;
            }
            if(a.size()==k)
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};