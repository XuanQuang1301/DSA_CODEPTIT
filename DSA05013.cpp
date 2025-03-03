#include <bits/stdc++.h>
using namespace std;
long long const MOD = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int d[n + 5] = {0};
        d[0] = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= k; j++){
                if(i < j) break;
                //d[i] so cach buoc den bac i
                d[i] = (d[i] + d[i - j]) % MOD;
            }
        }
        cout << d[n] << endl;
    }
}