#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    double a,b,p=1e9;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        p=min(p,a/b);
    }
    cout<<fixed<<setprecision(7)<<p*m;
}
