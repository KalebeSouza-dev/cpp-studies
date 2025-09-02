#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k, n, w, an, PA;
    cin >> k >> n >> w;

    an = k * w;
    PA = ((k + an) * w) / 2;
    
    if (n >= PA){
        cout << 0 << endl;
    } else {
    cout << (PA - n) << endl;
    }

    return 0;
}