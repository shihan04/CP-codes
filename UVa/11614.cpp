#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        ans=(-1+sqrt(1.0+8.0*n))/2.0;
        cout<<ans<<"\n";
    }
}
