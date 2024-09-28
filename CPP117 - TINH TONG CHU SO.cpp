#include<bits/stdc++.h>
using namespace std;
int tong(int n){
    nhan:
    int sum=0;
    while (n){
        sum+=n%10;
        n/=10;
    }
    n=sum;
    if (n>=10) goto nhan;
    else return n;

}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        cout<<tong(n)<<endl;
    }
    return 0;
}