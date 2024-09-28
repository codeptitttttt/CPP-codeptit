#include<bits/stdc++.h>
using namespace std;
int usc(int a,int b){
    while (b){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
long long bsc(int a,int b){
    return 1ll*a*b/usc(a,b);
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b; cin>>a>>b;
        cout<<bsc(a,b)<<" "<<usc(a,b)<<endl;
    }
    return 0;
}