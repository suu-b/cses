#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 0;
        return 0;
    }

    long long moves = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
            continue;

        long long diff = arr[i - 1] - arr[i];
        moves += diff;
        arr[i] += diff;
    }

    cout << moves;
    return 0;
}