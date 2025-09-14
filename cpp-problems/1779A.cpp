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
    while (t--){
        int n;
        string s;
        cin >> n >> s;

        set<char> st(s.begin(), s.end());
        if (st.size() == 1){
            cout << -1 << endl;
            continue;
        } if (s.find("RL") != string::npos) {
            cout << 0 << "\n";
            continue;
        }
        int pos = s.find("LR");
        cout << pos + 1 << "\n";
    }
    return 0;
}