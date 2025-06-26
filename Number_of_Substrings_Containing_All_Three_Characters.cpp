#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int abc[3] = {-1,-1,-1};
        int cnt =0;
        for(int i=0;i<n;i++){
            abc[s[i] - 'a'] = i;
            if(abc[0] != -1 && abc[1] != -1 && abc[2] != -1){
                cnt = cnt + (1+min(min(abc[0],abc[1]),abc[2]));
            }
        }
        return cnt++;
    }
};