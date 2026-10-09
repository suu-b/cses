#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int maxLength = 1, len = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            len = 1;
        }
        else
        {
            len++;
        }
        maxLength = max(len, maxLength);
    }

    cout << maxLength;
}