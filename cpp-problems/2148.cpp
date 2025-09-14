#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    while (n -- ){
        int x, q; 
        cin >> x >> q;
        
        if (q % 2 == 0){
            cout << 0 << endl;
        } else {
            cout << x << endl;
        }
    }
    return 0;
}