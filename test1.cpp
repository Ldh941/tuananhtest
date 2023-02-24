#include <iostream>
#include <vector>

using namespace std;

void print_subset(vector<int>& subset) {
    
    for (int i = 0; i < subset.size(); i++) {
        if (i > 0) ;
        cout << subset[i];
    }
    cout <<" ";
}

void generate_subset(int n, int k, vector<int>& subset, int next) {
    if (subset.size() == k) {
        print_subset(subset);
        return;
    }
    if (next > n) {
        return;
    }

    subset.push_back(next);
    generate_subset(n, k, subset, next+1);
    subset.pop_back();
    generate_subset(n, k, subset, next+1);
}

int main() {
    int t;
    cin >> t;
    while (t--){
    int n, k;
    cin >> n >> k;
    vector<int> subset;
    generate_subset(n, k, subset,1);
    }
    return 0;

}
