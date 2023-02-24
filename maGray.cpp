#include <iostream>
#include <string>
#include <bitset>
using namespace std;

string Gray(string binary) {
    int n = binary.length();
    string gray = "";
    gray += binary[0];
    for (int i = 1; i < n; i++) {
        int b1 = binary[i - 1] - '0';
        int b2 = binary[i] - '0';
        int x = b1 ^ b2;
        gray += to_string(x);
    }
    return gray;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        string binary;
        cin >> binary;
        string gray = Gray(binary);
        cout << gray << endl;
    }
    return 0;
}
