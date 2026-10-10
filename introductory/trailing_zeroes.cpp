#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    while (n > 1)
    {
        n = n / 5;
        count += n;
    }

    cout << count;
}