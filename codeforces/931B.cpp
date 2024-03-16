#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,r,l;
    cin>>n>>a>>b;
    for(l=2,r=1;l<=n;l*=2,r++){
        bool c=0;
        for(int i=1;i<n;i+=l){
            if(i<=a&&a<i+l&&i<=b&&b<i+l){
                c=1;
                break;
            }
        }
        if(c) break;
    }
    if(l==n) cout<<"Final!";
    else cout<<r;
}
