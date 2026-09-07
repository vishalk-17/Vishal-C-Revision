#include <iostream>
using namespace std;

int main() {
    int n = 99; // Binary representation: 11001
    cout << "Number of set bits in " << n << ": " << __builtin_popcount(n) << endl;
    // Output: Number of set bits in 25: 3
    return 0;
}
