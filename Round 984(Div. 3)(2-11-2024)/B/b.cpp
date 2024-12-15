#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, answer = 0;
        cin >> n >> k;
        unordered_map<int, int> mpp;
        for(int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            mpp[b] += c;
        }
        priority_queue<int> cost;
        for(auto& it : mpp) {
            cost.push(it.second);
        }
        for(int i = 0; i < n && !cost.empty(); i++) {
            answer += cost.top();
            cost.pop();
        }
        cout << answer << endl;
    }
}