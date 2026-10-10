#include <iostream>
#include <cmath>

using namespace std;

const long long MOD = 1000000007;

long long power(int a)
{
    long long acc = 1;
    for (int i = 0; i < a; i++)
        acc = (acc * 2) % MOD;

    return acc;
}
int main()
{
    int n;
    cin >> n;

    cout << power(n);
}