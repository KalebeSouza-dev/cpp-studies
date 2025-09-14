#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define pb push_back;
#define read_vec(v,n) for(int i = 0; i < n; i++) cin >> v[i]

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    //vector<vector<int>> mat = {{8}, {0,1,3,4,7,8,9},{8},{8,9},{8,9},{6,8,9},{8},{0,3,8,9},{},{8} };
    vector<int> mat = {2,7,2,3,3,4,2,5,1,2};
    int a = n / 10; 
    int b = n % 10;
     
    cout << ((mat[a])* (mat[b])) << endl;


    return 0;
}