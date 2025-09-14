#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

ll S(ll x) {
    ll soma = 0;
    while (x > 0) {
        soma += x % 10;
        x /= 10;
    }
    return soma;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    string s = to_string(n);
    int len = s.size();

    ll a = 1;
    for (int i = 1; i < len; i++) a *= 10;
    a -= 1;

    ll b = n - a;

    cout << ( (len - 1) * 9 + S(b) ) << "\n";

    return 0;
}
