#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    int cont1 = 0, cont2 = 0;
    cin >> n;

    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k == 2){
            cont2 += 1;
        } else if (k == 1){
            cont1 += 1;
        }
    }

    int out = 0;
    if (cont2 <= cont1){
        out += cont2;
        out += (cont1 - cont2) / 3;
    } else {
        out += cont1;
    }

    cout << out << "\n";

    return 0;
}