#include <iostream>
#include <vector>
using namespace std;

string decimalToBinary(int num, int n)
{
    string ans = "";

    for (int i = n - 1; i >= 0; i--)
    {
        if (num & (1 << i))
            ans += '1';
        else
            ans += '0';
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<string> sol;

    for (int i = 0; i < (1 << n); i++)
    {
        int gray = i ^ (i >> 1);
        sol.push_back(decimalToBinary(gray, n));
    }

    for (string i : sol)
        cout << i << endl;

    return 0;
}