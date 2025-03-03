#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;

        int a[n], tmp[s + 1] = {0};
        tmp[0] = 1;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            for(int j = s; j >= 1; j--){
                if(j >= a[i] && tmp[j] == 0 && tmp[j - a[i]] == 1){
                    //xet xem co tap con nao co tong bang tmp[j] hay 0
                    tmp[j] = 1;
                }
            }
        }   
        cout << (tmp[s] == 1 ? "YES" : "NO") << endl;
    }
}