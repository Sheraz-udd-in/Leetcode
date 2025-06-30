#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l=0,r=0,Max_len = 0;
        map<int,int> mp;
        while(r<n){
            mp[fruits[r]]++;
            if(mp.size() > 2){
                while(mp.size()>2){
                    mp[fruits[l]]--;
                    if(mp[fruits[l]] == 0){
                        mp.erase(fruits[l]);
                    }
                    l++;
                }
            }
            Max_len = max(Max_len, r-l+1);
            r++;
        }
        return Max_len;
    }
};