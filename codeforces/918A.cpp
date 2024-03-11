#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[2]={1,1},p=0;
    cin>>n;
    char s[5001];
    for(int i=0;i<=n;i++) s[i]='o';
    s[1]='O';
    for(;a[p]<n;p++,p%=2){
        a[p]=a[0]+a[1];
        s[a[p]]='O';
    }
    for(int i=1;i<=n;i++) cout<<s[i];
}
