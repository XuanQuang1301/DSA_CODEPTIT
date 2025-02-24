#include <bits/stdc++.h>
using namespace std;
string s = "09";
int n, a[100], boi;
int check(int a[], int i){
    boi = 0;
    for(int j = 1; j <= i; j++){
        boi = boi * 10 + (s[a[j]] - '0');
    }
    if(boi % n == 0 && boi != 0){
        return 1;
    }
    return 0;
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(check(a, i)){
            return;
        }
        else Try(i + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << boi << endl;
    }
}