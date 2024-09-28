#include<bits/stdc++.h>
using namespace std;
int snt(int n){
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return n>1;
}
int check1(int n){
    while (n>=10){
        if (n%10<=(n/10)%10) return 0;
        n/=10;
    }
    return 1;
}
int check2(int n){
    while (n>=10){
        if (n%10>=(n/10)%10) return 0;
        n/=10;  
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int dem=0;
        int l=pow(10,n-1),r=pow(10,n)-1;
        for (int i=l;i<=r;i++){
            if ((check1(i)&&snt(i)) || (check2(i)&& snt(i))) dem++;
        }
        cout<<dem<<endl;
    }
}