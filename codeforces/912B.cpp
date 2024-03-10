#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,ans;
    cin>>n>>k;
    if(k==1){
        cout<<n;
        return 0;
    }
    ans=1;
    while(ans<n) ans=2*ans+1;
    cout<<ans;
}
