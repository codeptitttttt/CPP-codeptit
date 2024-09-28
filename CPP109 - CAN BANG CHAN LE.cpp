#include<bits/stdc++.h>
using namespace std;
int check(int n){
    int x=0,y=0;
    while (n){
        if (n%2==0) x++;
        else y++;
        n/=10;
    }
    if (x==y) return 1;
    else return 0;
}
int main(){
    int n;
    cin>>n;
    int l=pow(10,n-1),r=pow(10,n)-1;
    int dem=0;
    for (int i=l;i<=r;i++){
        if (check(i)){
            dem++;
            cout<<i<<" ";
        }
        if (dem==10){
            cout<<endl;
            dem=0;
        }
    }
    return 0;
}