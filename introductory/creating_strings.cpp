#include <iostream>
#include <set>
using namespace std;

void f(string s, int index, set<string> &ans)
{
    if (index == s.size() - 1)
    {
        ans.insert(s);
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        swap(s[index], s[i]);
        f(s, index + 1, ans);
        swap(s[index], s[i]);
    } /*  */
}

int main()
{
    string s;
    cin >> s;

    set<string> ans;
    f(s, 0, ans);

    cout << ans.size() << endl;
    for (string s : ans)
        cout << s << endl;
    return 0;
}