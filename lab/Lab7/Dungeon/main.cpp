#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    vector<int> monsters(n);
    for (int i = 0; i < n; i++) {
        cin >> monsters[i];
    }

    sort(monsters.begin(), monsters.end());

    int q;
    cin >> q;

    vector<int> powers(q);
    for (int i = 0; i < q; i++) {
        cin >> powers[i];
    }

    for (int i = 0; i < q; i++) {
        int power = powers[i];
        int killed = 0;
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (monsters[mid] <= power) {
                killed = mid + 1;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << killed << "\n";
    }

    return 0;
}