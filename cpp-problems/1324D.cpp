#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;

    vector<int> profs(n), alunos(n);
    for (int i = 0; i < n; i++) cin >> profs[i];
    for (int i = 0; i < n; i++) cin >> alunos[i];

    vector<int> soma(n);
    for (int i = 0; i < n; i++) soma[i] = profs[i] - alunos[i];
    sort(soma.begin(), soma.end());

    int l = 0, r = n - 1;
    long long cont = 0;

    while (l < r) {
        if (soma[l] + soma[r] > 0) {
            cont += (r - l);
            r--;
        } else {
            l++;
        }
    }

    cout << cont << "\n";
    return 0;
}