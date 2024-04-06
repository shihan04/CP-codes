#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s[5],ans="";
    cin>>n;
    for(int i=0;i<5;i++) cin>>s[i];
    for(int i=0;i<n;i++){
        if(s[3][4*i]=='*') ans+='2';
        else if(s[3][4*i+1]=='*') ans+='1';
        else if(s[3][4*i+2]=='*') ans+='3';
    }
    cout<<ans<<"\n";
}
