#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getAllSubarraysWithSumAtMostK(const vector<int>& arr, int k) {
    int n = arr.size();
    vector<vector<int>> result;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum > k) break; 
            result.push_back(vector<int>(arr.begin() + i, arr.begin() + j + 1));
        }
    }

    return result;
}

void printSubarrays(const vector<vector<int>>& subarrays) {
    cout << "Subarrays with sum <= k:\n";
    for (const auto& sub : subarrays) {
        for (int num : sub) cout << num << " ";
        cout << endl;
    }
}

int main() {
    int n, k;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> k;

    vector<vector<int>> result = getAllSubarraysWithSumAtMostK(arr, k);
    printSubarrays(result);

    return 0;
}
