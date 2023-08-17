#include <iostream>
#include <vector>
#include <string>
#include <regex>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<string> results;
    regex pattern("^[mM]+[eE]+[oO]+[wW]+$");

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (regex_search(s, pattern))
        {
            results.push_back("YES");
        }
        else
        {
            results.push_back("NO");
        }
    }

    for (const string &result : results)
    {
        cout << result << endl;
    }

    return 0;
}
