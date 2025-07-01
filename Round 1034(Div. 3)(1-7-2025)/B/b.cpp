#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(k > 1) cout << "YES" << endl;
        else {
            if(*max_element(arr.begin(), arr.end()) == arr[j-1]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}