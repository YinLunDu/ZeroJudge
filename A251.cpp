#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int arr[50];

void solve()
{
    vector <int> v;
    int n;
    cin >> n >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    v.push_back(arr[1]);
    v.push_back(arr[2]);
    v.push_back(arr[3]);
    v.push_back(arr[4]);
    for (int i=5; i<=n; i++) {
        arr[i] = arr[i-4] + arr[i-1];
        v.push_back(arr[i]);
    }

    sort(v.begin(), v.end());
    cout << v[(n-1) / 2] << "\n";
    
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, cnt = 0;
    
    cin >> t;

    while (t--) {
        // cout << "Case " << ++cnt << ": ";
        solve();
    }
    
    return 0;
}