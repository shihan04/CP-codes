#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,u=0,r=0,ans=0;
    string s;
    cin>>n;
    cin>>s;
    if(s[0]=='R') r++;
    else u++;
    for(int i=1;i<n;i++){
        if(s[i]=='R') r++;
        if(s[i]=='U') u++;
        if(s[i]=='R'&&s[i-1]=='R'&&r==u+1) ans++;
        if(s[i]=='U'&&s[i-1]=='U'&&u==r+1) ans++;
    }
    cout<<ans;
}
