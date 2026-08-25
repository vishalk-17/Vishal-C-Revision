#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    if (n == 0)
        return {};

    int m = n;
    vector<vector<int>> matrix(m, vector<int>(n));

    int top = 0;
    int down = m - 1;
    int left = 0;
    int right = n - 1;
    int id = 0;
    int count = 1;

    while (top <= down && left <= right) {

        // left to right
        if (id == 0) {
            for (int i = left; i <= right; i++) {
                matrix[top][i] = count++;
            }
            top++;
        }

        // top to down
        if (id == 1) {
            for (int i = top; i <= down; i++) {
                matrix[i][right] = count++;
            }
            right--;
        }

        // right to left
        if (id == 2) {
            for (int i = right; i >= left; i--) {
                matrix[down][i] = count++;
            }
            down--;
        }

        // down to top
        if (id == 3) {
            for (int i = down; i >= top; i--) {
                matrix[i][left] = count++;
            }
            left++;
        }

        id = (id + 1) % 4;
    }

    return matrix;
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<vector<int>> matrix = generateMatrix(n);

    cout << "\nSpiral Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}