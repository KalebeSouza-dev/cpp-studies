#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define pb push_back;
#define read_vec(v, n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        vector<int> h(n);
        read_vec(h, n);
    
        vector<int> v(m);
        read_vec(v, m);
        cout << n + m << endl;
    }

    return 0;
}