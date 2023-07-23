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

    //int sum = 0;
    int max = 0;

    for (int i = 0, j = 0; i < n; j++){
        if (j == n) {
            j = 0;
            i++;
            //cout << endl;
        }
        for(int i2 = i, j2 = j; i2 < n; j2++) {
            if(j2 == n) {
                j2 = j;
                i2++;
            }
            int sum = 0;
           /*  for (int tempi = i,tempj = j; tempi < i2;tempj++) {
                if(tempj == j2) {
                    tempj = j;
                    tempi++;
                }
                sum += map[tempi][tempj];
            } */
            if (sum > max) {
                max = sum;
            }
        }
        cout << map[i][j] << " ";
    }
    cout << max << "fdf" << endl;
    return 0;
}