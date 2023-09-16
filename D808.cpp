// #pragma GCC optimize("Ofast,unroll-loops,O3")
#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define F first
#define S second
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define SZ(x) (int)(x).size()
#define ALL(x) (x).begin(),(x).end()
#define loop(i,a,b) for(int i=(a);i<=(b);i++)
#define STL(x) for(auto &HEHE:x) cout << HEHE << " "; cout << "\n";
#define arr0(x,y) loop(HEHE,0,y-1) cout << x[HEHE] << " "; cout << "\n";
#define arr1(x,y) loop(HEHE,1,y) cout << x[HEHE] << " "; cout << "\n";
using namespace std;
void dbg() {;}
template<class T, class ...U>
void dbg(T a, U ...b) {cout << a << " "; dbg(b...);}
void endline() {cout << "\n";}
ostream& operator <<(ostream& os, const pii& a) { os << "[" << a.F << ", " << a.S << "]"; return os; }
ostream& operator <<(ostream& os, const pair<int, pii>& a) { os << a.F << " : [" << a.S.F << ", " << a.S.S << "]"; return os; }
/// ------- Initialization End -------

int amount;

struct DSU
{
    int N;
    vector <int> f, sz;
    DSU(int n) {
        init(n);
    }
    void init(int n) {
        N = n;
        f.resize(n + 1);
        iota(f.begin(), f.end(), 0);
        sz.assign(n + 1, 1);
    }
    int find(int x) {
        while (x != f[x])
            x = f[x] = f[f[x]];
        return x;
    }
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    bool merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return false;
        }
        if (sz[x] < sz[y]) {
            swap(x, y);
        }
        sz[x] += sz[y];
        f[y] = x;
        return true;
    }
    int size(int x) {
        return sz[find(x)];
    }
    int mx_sz() {
        int res = -1;
        loop(i, 1, N)
            res = max(res, sz[i]);
        return res;
    }
};

int a[1000005];

signed main()
{
    IOS

    int n;
    while (cin >> n) {
        DSU D(n);
        int x;
        amount = n;
        loop(i, 1, n)  {
            cin >> x;
            if (D.merge(i, x)) {
                amount--;
            }
        }
        cout << amount << " " << D.mx_sz() << "\n";
    }
    
    return 0;
}