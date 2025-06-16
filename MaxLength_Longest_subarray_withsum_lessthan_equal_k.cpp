#include <bits/stdc++.h>
using namespace std;
int Longest_substring(vector<int>& arr,int k){
    int n = arr.size();
    int l =0 , r= 0, Max_len = 0, sum =0;
    while( r < n-1){
        sum = sum + arr[r];
        if( sum > k){
            sum -= arr[l];
            l++;
        }
        if ( sum <= k){
            Max_len = max(Max_len,r-l+1);
        }
        r++;
    }
    return Max_len;
}
int main(){
    int x;cin>>x;
    vector<int> arr(x);
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int k;cin>>k;
    cout<<"Max Lenght: "<<Longest_substring(arr,k);
    

}