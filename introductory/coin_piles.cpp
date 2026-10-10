#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        string sol = ((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a) ? "YES" : "NO";
        ans.push_back(sol);
    }

    for (string s : ans)
        cout << s << endl;
    return 0;
}