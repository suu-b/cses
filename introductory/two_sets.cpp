#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
        vector<long long> a;
        vector<long long> b;

        long long target = sum / 2;

        for (long long i = n; i >= 1; i--)
        {
            if (i <= target)
            {
                a.push_back(i);
                target -= i;
            }
            else
                b.push_back(i);
        }

        cout << a.size() << endl;
        for (long long i : a)
            cout << i << " ";
        cout << endl;
        cout << b.size() << endl;
        for (long long i : b)
            cout << i << " ";
    }
    else
    {
        cout << "NO";
    }
}