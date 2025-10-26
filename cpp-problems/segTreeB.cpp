#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define pb push_back
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]
const int MAXN = 2e5 + 5;

inline int left(int id) { return (id << 1); }
inline int right(int id) { return (id << 1) | 1; }

int n, q;
vector<pair<int, int>> tree(4 * n, {0, 0});
vector<int> arr(MAXN);

void build(int id, int l, int r){
    if (l == r) tree[id].first = arr[l];
    else{
        ll mid = (l + r) / 2;
        build(left(id), l, mid);
        build(right(id), mid + 1, r);
        
        vector<int> v = {
            tree[left(id)].first,
            tree[left(id)].second,
            tree[right(id)].first,
            tree[right(id)].second
        };
        sort(v.begin(), v.end());

        tree[id].first = v[3];
        tree[id].second =  v[2];
    }
}

void muda(int id, int l, int r, int pos, int val){
    if (l == r) {
        tree[id].first = val;
        arr[l] = val;
    } else{
        ll mid = (l + r) / 2;
        if (pos <= mid){
            muda(left(id), l , mid, pos, val);
        } else {
            muda(right(id), mid + 1, r, pos, val);
        }

        vector<int> v = {
            tree[left(id)].first,
            tree[left(id)].second,
            tree[right(id)].first,
            tree[right(id)].second
        };
        sort(v.begin(), v.end());

        tree[id].first = v[3];
        tree[id].second =  v[2];
    }
}

pair<int, int> query(int id, int l, int r, int lq, int rq){
    if (l > rq || r < lq) return {0, 0};
    if (lq <= l && r <= rq) return tree[id];

    ll mid = (l + r) / 2;
    pair<int, int> L = query(left(id), l, mid, lq, rq);
    pair<int, int> R = query(right(id), mid + 1, r, lq, rq);

    vector<int> v = {L.first, L.second, R.first, R.second};
    sort(v.begin(), v.end());

    return {v[3], v[2]};
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;

    arr.resize(n);
    tree.resize(4 * n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cin >> q;
    build(1, 0, n - 1);

    while (q--) {
        string t;
        ll i, j;

        cin >> t >> i >> j;

        if (t == "U"){
            muda(1, 0, n - 1, i - 1, j);
        }
        else {
            pair<int, int> out = query(1, 0, n - 1, i - 1, j - 1);
            cout << out.first + out.second << endl;
        }
    }

    return 0;
}