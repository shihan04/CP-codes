#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s[10];
    cin>>t;
    while(t--){
        string ans="";
        for(int i=0;i<10;i++) cin>>s[i];
        for(int i=1;i<s[0].size()-1;i++){
            int c=0;
            for(int j=1,k=1;j<9;j++,k*=2){
                c+=k*(s[j][i]=='\\');
            }
            ans+=(char)c;
        }
        cout<<ans<<"\n";
    }
}
