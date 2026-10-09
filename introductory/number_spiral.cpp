#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    long long sol[tests];

    for (int test = 0; test < tests; test++)
    {
        long long x, y;
        cin >> x >> y;

        x--;
        y--;

        if (x > y)
        {
            long long diag_val = (x * (x + 1)) + 1;
            long long offset = x - y;

            if (x % 2 == 0)
            {
                sol[test] = diag_val - offset;
            }
            else
                sol[test] = diag_val + offset;
        }
        else
        {
            long long diag_val = (y * (y + 1)) + 1;
            long long offset = y - x;

            if (y % 2 == 0)
            {
                sol[test] = diag_val + offset;
            }
            else
                sol[test] = diag_val - offset;
        }
    }

    for (long long i : sol)
        cout << i << endl;
}