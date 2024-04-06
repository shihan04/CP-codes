#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,v[10],m;
    string s[10];
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        m=0;
        for(int i=0;i<10;i++){
            cin>>s[i]>>v[i];
            m=max(m,v[i]);
        }
        cout<<"Case #"<<tc<<":\n";
        for(int i=0;i<10;i++){
            if(m==v[i]) cout<<s[i]<<"\n";
        }
    }
}
