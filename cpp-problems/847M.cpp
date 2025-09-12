#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    int rz;
    cin >> n;

    vector<int> v(n);
    read_vec(v, n);
    
    rz = v[1] - v[0];
    bool f = true;
    for (int i = 0; i < n - 1; i++){
        if (v[i+1] - v[i] != rz){
            cout << v[n -1] << endl;
            f = false;
            break;
        }
    }
    if (f){
        cout << v[n - 1] + rz << endl;
    }

    return 0;
}