/* ให้ implement algorithm การแปลงจาก infix เป็น postfix ตาม lecture9 หน้า 33
ส่งโปรแกรม ภาษา C หรือ C++ พร้อมผลการ run ตัวอย่าง input ที่รับเข้าไป */

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> s;
    string infix, postfix = "";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') {
            s.push(infix[i]);
        } else if (infix[i] == ')') {
            while (s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else if (infix[i] == '+' || infix[i] == '-') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        } else if (infix[i] == '*' || infix[i] == '/') {
            while (!s.empty() && (s.top() == '*' || s.top() == '/')) {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        } else {
            postfix += infix[i];
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << postfix << endl;
    
    
    return 0;
}