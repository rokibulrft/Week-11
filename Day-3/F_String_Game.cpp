#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    bool found = false;
    auto ok = [&](int del)
    {
        vector<bool> bad(n);
        for (int i = 0; i <= del; i++)
        {
            bad[v[i]] = true;
        }
        for (int i = 0, j = 0; i < n; i++)
        {
            if (!bad[v[i]] && t[i] == p[j])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                return true;
            }
        }
        return false;
    };

    int l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (found)
    {
        cout << ans + 1;
    }
    else
    {
        cout << ans;
    }
}