#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int select;
        cin >> select;

        switch (select) {
            case 1:
                int num;
                cin >> num;
                s.push(num);
            break;
            case 2:
                if (s.empty()) break;
                s.pop();
            break;
            case 3:
                if (s.empty()) cout << "EMPTY" << endl;
                else cout << s.top() << endl;
            break;
            case 4:
                cout << s.size() << endl;
            break;
            default: break;
        }
    }
    return 0;
}
