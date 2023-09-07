#include <iostream>

using namespace std;

int main(void) {
    int n, m, k;
    cin >> n >> m >> k;

    int count = 0;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        
        if ((u == v) == k) count++;
        else if ((u == k) || (v == k)) count++;
    }

    cout << count;

    return 0;
}