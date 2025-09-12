#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i < n; i ++){
        string pos;
        cin >> pos;
        char s = pos[0];
        char linha = pos[1];
        int ii = linha - '0';

        for (int i = 1; i < 9; i ++){
            if (i != ii){
                cout << s << i << " ";
            }
        }
        vector<char> letras = {'a','b','c','d','e','f','g','h'};
        for (char c: letras){
            if (c != s){
                cout << c << ii << " ";
            }
        }
    }

    return 0;
}