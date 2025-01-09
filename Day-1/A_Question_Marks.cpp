#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> v(4);
        for (char c : s) {
            if (c != '?') v[c - 'A']++;
        }
        int ans = 0;
        for (int i = 0; i < 4; i++) ans += min(v[i], n);
        cout << ans << "\n";
    }
    return 0;
}
