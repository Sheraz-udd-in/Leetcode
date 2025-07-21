#include<bits/stdc++.h>
using namespace std;
int lonn(vector<int> & arr,int k){
    int n = arr.size();
    int l=0,r=0,maxlen=0,sum=0;
    while(r<n){
        while(l <= r&&sum > k){
            sum -= arr[l];
            l++;
        }
        if(sum == k){
            maxlen = max(maxlen,r-l+1);
        }
        r++;
        if(sum <k){
            sum += arr[r];
        }
    }
    return maxlen;
}
int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;cin>>k;
    cout<<"Longest subarray with sum k is "<< lonn(arr,k);
}