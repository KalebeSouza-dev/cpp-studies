#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define pb push_back;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a, b, c, d;
    int out = 0;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    out += count(s.begin(), s.end(), '1') * a;
    out += count(s.begin(), s.end(), '2') * b;
    out += count(s.begin(), s.end(), '3') * c;
    out += count(s.begin(), s.end(), '4') * d;

    cout << out << endl;

    return 0;
}