#include<bits/stdc++.h>
using namespace std;
int main(){
    double n; cin>>n;
    double sum=0;
    for (double i=1;i<=n;i++){
        sum+=1/i;
    }
    cout << fixed << setprecision(4)<<sum<<endl;
    return 0;
}