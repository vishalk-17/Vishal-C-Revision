/*  find the missing numer only one number

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    // Find the largest number in the sequence
    int maxNum = n + 1; // In this case, maxNum should be 6
    int total = (maxNum * (maxNum + 1)) / 2;
    int miss = total - sum;
    cout << "The missing number is: " << miss << endl;
    return 0;
}
*/

/*

अगर multiple missing numbers हों, तो यह formula वाला तरीका काम नहीं करेगा क्योंकि वह केवल एक missing number के लिए है।

उदाहरण:

int arr[] = {1, 3, 5, 6, 8};

मान लो range 1 से 8 तक है।

Expected:

1 2 3 4 5 6 7 8

Present:

1 3 5 6 8

Missing:

2 4 7
*/


/*Method 1: Boolean Array (Easy)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxNum = 8;

    vector<bool> present(maxNum + 1, false);

    for (int i = 0; i < n; i++) {
        present[arr[i]] = true;
    }

    cout << "Missing numbers: ";
    for (int i = 1; i <= maxNum; i++) {
        if (!present[i]) {
            cout << i << " ";
        }
    }

    return 0;
}


*/
//Method 2: Unordered Set
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> s(arr, arr + n);

    cout << "Missing numbers: ";
    for (int i = 1; i <= 8; i++) {
        if (s.find(i) == s.end()) {
            cout << i << " ";
        }
    }
}

