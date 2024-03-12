#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[k],ans;
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        ans=max(a[0],n-a[k-1]+1);
        for(int i=1;i<k;i++){
            ans=max(ans,(a[i]-a[i-1]+2)/2);
        }
        cout<<ans<<"\n";
    }
}
