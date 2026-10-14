#include <iostream>
#include <cmath>

using namespace std;

void f(int n, int l, int r, int m)
{
    if (n == 1)
    {
        cout << l << " " << r << endl;
        return;
    }

    f(n - 1, l, m, r);
    cout << l << " " << r << endl;
    f(n - 1, m, r, l);
}

int main()
{
    int n;
    cin >> n;

    cout << pow(2, n) - 1 << endl;
    f(n, 1, 3, 2);
    return 0;
}