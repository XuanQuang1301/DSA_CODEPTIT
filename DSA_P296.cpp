#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int cnt[100000] = {0}, Max = 0;
    cnt[1] = Max = max(Max, a[1]);
    for(int i = 2; i <= n; i++){
        Max = max(Max, Max + a[i]);
        cnt[i] = Max;
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == r){
            cout << max(a[l], 0) << endl;
        }
        else{
            cout << cnt[r] - cnt[l - 1] << endl;
        }
    }
}