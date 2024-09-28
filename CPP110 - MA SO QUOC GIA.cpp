#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        cin.ignore();
        string s;
        cin>>s;
        string a="084";
        string b=s.erase(s.find(a),3);
        cout<<b<<endl;
    }
    return 0;
}