#include <iostream>
#include <algorithm>
using namespace std;

int totalSeats(int m, int a, int b, int c) {
    int seatsRowOne = min(a, m);
    int seatsRowTwo = min(b, m);
    int remainingSeatsRowOne = m - seatsRowOne;
    int remainingSeatsRowTwo = m - seatsRowTwo;
    int leftSeatsForC = min(c, remainingSeatsRowOne + remainingSeatsRowTwo);
    return (seatsRowOne + seatsRowTwo + leftSeatsForC);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        cout << totalSeats(m, a, b, c) << endl;
    }
}