#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Hàm sinh các xâu nhị phân độ dài n
vector<string> generate_binary_strings(int n) {
    if (n == 0) {
        return {""};
    } else {
        vector<string> strings = generate_binary_strings(n - 1);
        vector<string> result;
        for (string s : strings) {
            result.push_back(s + 'A');
            result.push_back(s + 'B');
        }
        return result;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> ab_strings = generate_binary_strings(n);

        for (string s : ab_strings) {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}
