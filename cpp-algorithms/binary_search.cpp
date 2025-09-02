#include <bits/stdc++.h>
using namespace std;

int bb(int k, const vector<int>& array){
    int l = 0;
    int r = array.size() -1;

    while (l <= r){
        int mid = (l + r) / 2;
        if (k == array[mid]){
            return mid;
        } else if (k > array[mid]){
            l = mid + 1;
        } else{
            r = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    cout << bb(1, arr) << endl;
    cout << bb(11, arr) << endl;
    return 0;
}