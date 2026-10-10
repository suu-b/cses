#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> uom;

    for (char c : s)
    {
        uom[c]++;
    }

    int odd_count = 0;
    char odd_c = '\0';

    for (auto p : uom)
    {
        if (p.second % 2 != 0)
        {
            odd_count++;
            odd_c = p.first;
        }
    }

    if (odd_count > 1)
        cout << "NO SOLUTION";
    else
    {
        string left = "";
        string middle = "";

        for (auto p : uom)
        {
            left += string(p.second / 2, p.first);
        }
        if (odd_count == 1)
            middle = odd_c;
        string right = left;
        reverse(right.begin(), right.end());

        cout << left + middle + right;
    }

    return 0;
}