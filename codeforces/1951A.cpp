#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,o;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        o=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') o++;
        }
        if(s=="11") cout<<"No\n";
        else if(o%2) cout<<"No\n";
        else cout<<"Yes\n";
    }
}
