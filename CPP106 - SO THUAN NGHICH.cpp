#include<bits/stdc++.h>
using namespace std;
int check(long long n){
    long long tam=n;
    long long res=0;
    while (n){
        res=res*10+n%10;
        n/=10;
    }
    if (tam==res) return 1;
    else return 0;
}
int main(){
    int t; cin>>t;
    while (t--){
        long long n;
        cin>>n;
        if (check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}