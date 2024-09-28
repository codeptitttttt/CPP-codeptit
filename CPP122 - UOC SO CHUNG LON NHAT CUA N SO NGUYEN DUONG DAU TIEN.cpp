#include<bits/stdc++.h>
using namespace std; 
#define ll long long
ll uc(ll a,ll b){
    if(b==0) return a;
    else return uc(b,a%b);
}

ll bc(ll a,ll b){
    return a*b/uc(a,b);
}
ll solve(ll n){
    ll tam=n;
    while (n>2){
       ll x=bc(n,n-1);
       tam=bc(tam,x);
       n--;
    }
    return tam;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}