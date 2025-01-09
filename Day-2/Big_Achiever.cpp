#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << 1 << " ";
        for (int i = 1; i < n; i++)
        {
            int possible = true;
            for (int j = 0; j < i; j++)
            {
                if (v[i] < v[j])
                {
                    possible = false;
                }
            }
            if (possible)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << '\n';
    }
}
