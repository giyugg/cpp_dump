#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    sort(arr.begin(), arr.end());
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}