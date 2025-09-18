#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define pb push_back;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.length() <= 2){
            cout << "NO" << endl;
            continue;
        }
        int o,c;
        o = 0,c = 0;
        for(int i = 1; i < s.length() - 1; i++){
            if(s[i] == '(') o++;
            else c++;
 
            if(c > o) break;
        }
        if(c != o){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
