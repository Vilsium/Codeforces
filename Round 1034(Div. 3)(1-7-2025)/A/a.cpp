#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 4 != 0) cout << "ALICE" << endl;
        else cout << "BOB" << endl;
    }
}