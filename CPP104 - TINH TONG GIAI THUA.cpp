#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll giaithua(ll n){
    ll tich=1;
    for (int i=1;i<=n;i++){
        tich*=1ll*i;
    }
    return tich;
}
int main(){
    int n; cin>>n;
    ll tong=0;
    for (int i=1;i<=n;i++){
        tong+=giaithua(1ll*i);
    }
    cout<<tong<<endl;
    return 0;
}