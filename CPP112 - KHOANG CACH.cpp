#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        double a, b,c,d,kc;
        cin>>a>>b>>c>>d;
        kc=sqrt(pow(c-a,2)+pow(d-b,2));
        cout<<fixed<<setprecision(4)<<kc<<endl;
    }
    return 0;
}