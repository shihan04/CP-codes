#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a,b,ans=0;
    cin>>n;
    cin>>k;
    cin>>a;
    cin>>b;
    if(k==1){
        cout<<(n-1)*a;
        return 0;
    }
    while(n!=1){
        if(n%k==0){
            ans+=min((n-n/k)*a,b);
            n/=k;
        }
        else if(n<k){
            ans+=(n-1)*a;
            n=1;
        }
        else if(n%k!=0){
            ans+=(n%k)*a;
            n-=n%k;
        }
    }
    cout<<ans;
}
