#include<bits/stdc++.h>
using namespace std;
void pt(int n){
    for (int i=2;i<=sqrt(n);i++){
        int dem=0;
        while (n%i==0){
            dem++;
            n/=i;
        }
        if (dem){
            cout<<i<<" "<<dem<<" ";
        }
    }
    if (n!=1) cout<<n<< " "<<1;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        pt(n);
        cout <<endl;
    }
    return 0;
}