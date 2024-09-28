#include<bits/stdc++.h>
using namespace std;
int check(int n){
    int dem=0,dem2=0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) dem++;
        while (n%i==0){
            n/=i;
            dem2++;
        }
    }
    if (n!=1) {
        dem++;
        dem2++;
    }
    if (dem==3 &&dem2==dem) return 1;
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        cout <<check(n)<<endl;
    }
    return 0;
}