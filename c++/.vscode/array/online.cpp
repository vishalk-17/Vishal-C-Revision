#include <iostream>
#include <vector>
using namespace std;

long long calculateDistance(int n, int m, int r, int c) {
    long long totalDistance = 0;
    int initialIndex = (r - 1) * m + c;

    for (int i = initialIndex; i < n * m; ++i) {
        int prevRow = (i / m) + 1;
        int prevCol = (i % m) + 1;
        int newRow = ((i - initialIndex + 1) / m) + 1;
        int newCol = ((i - initialIndex + 1) % m) + 1;
        totalDistance += abs(prevRow - newRow) + abs(prevCol - newCol);
    }

    return totalDistance;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        cout << calculateDistance(n, m, r, c) << endl;
    }
    return 0;
}
