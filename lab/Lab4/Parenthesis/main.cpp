#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string parenthesis;
    cin >> parenthesis;

    if (parenthesis[0] == ')') {
        cout << "NO" << endl;
        return 0;
    }

    int balance[2] = {0, 0};
    for (int i = 0; i < parenthesis.length(); i++) {
        if (parenthesis[i] == '(') {
            balance[0]++;
        } else {
            balance[1]++;
        }
    }

    if (balance[0] == balance[1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}