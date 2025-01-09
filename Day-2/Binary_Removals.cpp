#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        long long zeros = 0, inversions = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                zeros++;
            else
                inversions += zeros;
        }

        if (inversions <= x && inversions % k == 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 2 << '\n';
        }
    }

    return 0;
}
