#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n, k; 
        cin >> n >> k;
        long long a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        long long cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
        }
        cout << cnt << endl;
    }
}