#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        read_vec(v, n);

        sort(v.begin(), v.end());
        int out = floor((v[0] + v[1]) / 2);

        for (int i = 2; i < n; i++){
            out = floor((out + v[i])/2);
        }

        cout << out << endl;
    }
    return 0;
}