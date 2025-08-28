#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=0;
        int lam=0,ram=0,ans=0;
        while(l<r){
            lam = max(lam,height[l]);
            ram = max(ram,height[r]);
            if(lam<ram){
                ans += lam - height[l];
                l++;
            }
            else{
                ans += ram - height[r];
                r--;
            }
        }
        return ans;
    }
};