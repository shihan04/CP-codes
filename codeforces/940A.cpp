#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,x,ans=101;
    cin>>n>>d;
    int a[101]={0},s[101]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    if(d==100){
        cout<<0;
        return 0;
    }
    for(int i=1;i<=100;i++){
        s[i]=s[i-1]+a[i];
    }
    for(int i=1;i<=100-d;i++){
        ans=min(ans,s[i-1]-s[0]+s[100]-s[i+d]);
    }
    cout<<ans;
}
