#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,t=1;
    while(cin>>n){
        if(n==0) break;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>0) ans++;
            else if(a==0) ans--;
        }
        cout<<"Case "<<t<<": "<<ans<<"\n";
        t++;
    }
}
