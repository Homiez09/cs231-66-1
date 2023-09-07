#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int n; 
    cin >> n;
    vector<int> products(n);
    for (int i = 0; i < n; i++) cin >> products[i];
    sort(products.begin(), products.end());

    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int start, end, price;
        cin >> start >> end >> price;
    
        //อนุกรมเลขคณิต
        int sum = (end - start + 1) * (start + end) / 2;
        cout << sum << " ";
    }
    return 0;
}