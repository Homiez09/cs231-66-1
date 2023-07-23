#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int map[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> map[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n - i; k++) {
                for (int l = 0; l < n - j; l++) {
                int temp = 0;
                    for (int m = 0; m <= k; m++) {
                        for (int o = 0; o <= l; o++) {
                            temp += map[i + m][j + o];
                            // cout << map[i + m][j + o] << " ";
                        }
                        // cout << endl;
                        if (temp > sum) sum = temp;
                    }
                    // cout << "______" << endl;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}