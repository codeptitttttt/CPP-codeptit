#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll n){
    while (n>10){
        if (abs((n%10)-(n/10)%10)!=1) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        if (check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}