#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n - 1];

    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }
    long long totalSum = 1LL * n * (n + 1) / 2;
    cout << totalSum - sum;
}