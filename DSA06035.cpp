#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        int l[n], r[n];
        l[0] = 1;
        for(int i = 1; i < n; i++){
            if(a[i] > a[i - 1]){
                l[i] = l[i - 1] + 1;
            }
            else l[i] = 1;
        }
        r[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--){
            if(a[i] > a[i + 1]){
                r[i] = r[i + 1] + 1;
            }
            else r[i] = 1;
        }
        int MAX = 0;
        for(int i = 0; i < n; i++){
            MAX = max(MAX, l[i] + r[i] - 1);
        }
        cout << MAX << endl;
    }
}