#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool f = true;
        for (int x = 1; x <= 20; x++) {
	        for (int y = 1; y <= 20; y++) {
                if (x + y >= n || x == y) continue;
                int z = n - x - y;
                if (z == x || z == y) continue;
                if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) {
                    continue;
                }
                cout << "YES" << endl;
                cout << x << ' ' << y << ' ' << z << endl;
                f = false;
                break;
	        }
            if (not f){
                break;
            }
	    }
    if (f){
        cout << "NO" << endl;
    }
    }


    return 0;
}