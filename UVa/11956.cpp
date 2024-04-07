#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p;
    string s;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>s;
        p=0;
        int a[100]={0};
        for(int i=0;i<s.size();i++){
            if(s[i]=='.') continue;
            else if(s[i]=='>') p=(p+1)%100;
            else if(s[i]=='<') p=(p-1+100)%100;
            else if(s[i]=='+') a[p]=(a[p]+1)%256;
            else if(s[i]=='-') a[p]=(a[p]-1+256)%256;
        }
        cout<<"Case "<<tc<<":";
        for(int i=0;i<100;i++){
            cout<<" ";
            if(a[i]<16) cout<<"0";
            printf("%X",a[i]);
        }
        cout<<"\n";
    }
}
