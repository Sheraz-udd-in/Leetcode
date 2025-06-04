#include <bits/stdc++.h>
using namespace std;
void subarr(vector<int> & arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            for(int k=i;k <= i+j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int x; cin>>x;
    vector<int> arr(x);
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    subarr(arr);
}