#include <iostream>

using namespace std;

int main() {
    string text;
    string vowels = "aeiou";

    getline(cin, text);

    for (int i = 0; i < text.length()-2; i++) {
        if((vowels.find(text[i]) != string::npos) && (text[i+1] == 'p') && (text[i+2] == text[i])) {
            text.erase(i, 2);
            i--;
        }
    }

    cout << text;
    return 0;
}