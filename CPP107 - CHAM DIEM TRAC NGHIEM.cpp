#include<bits/stdc++.h>
using namespace std;
bool check(char a,char b){
    if (a!=b) return false;
    return true;
}
int main(){
    string s="ABBADCCABDCCABD";
    string s1="ACCABCDDBBCDDBB";
    int t;
    cin>>t;
    while (t--){
        int x;
        cin>>x;
        int dem=0,t=0;
        cin.ignore();
        string ss;
        getline(cin,ss);
        if (x==101){
            for (int i=0;i<ss.size();i++){
                if (ss[i]!=' '){
                    if(s[t++]==ss[i]){
                        dem++;
                    }
                }
            }
        }
        else {
            for (int i=0;i<ss.size();i++){
                if (ss[i]!=' '){
                    if(s1[t++]==ss[i]){
                        dem++;
                    }
                }
            }
        }
        float diem=(float)dem*2/3;
        cout<<fixed<<setprecision(2)<<diem<<endl;
    }
}