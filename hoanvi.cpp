#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printPermu(int n) {
    vector<int> nums(n);
    for (int i = 1; i <= n; i++) {
        nums[i-1] = i;
    }
    do {
        for (int i = 0; i < n; i++) {
            cout << nums[i];
        }
        cout << " ";
    } while (next_permutation(nums.begin(), nums.end()));
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        printPermu(n);
    }
    return 0;
}
