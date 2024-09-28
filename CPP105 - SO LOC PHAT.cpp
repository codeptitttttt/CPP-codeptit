#include<bits/stdc++.h>
using namespace std;
int check(int n){
    while (n){
        int b=n%10;
        if (b!=0 && b!= 6 &&b != 8){
            return 0;
        }
        else n/=10;
    }
    return 1;

}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n; cin>> n;
        if (check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}