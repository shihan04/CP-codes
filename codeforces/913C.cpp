#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int L,ans=4e18,sum=0;
    cin>>n>>L;
    long long int c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=1;i<n;i++){
        c[i]=min(c[i],2*c[i-1]);
        //cout<<c[i]<<" ";
    }
    for(int i=n-1;i>=0;i--){
        int x=L/(1<<i);
        L%=(1<<i);
        sum+=c[i]*x;
        ans = min(ans, sum + (L > 0) * c[i]);
        /*if(i!=0 && L!=0 && c[i]<2*c[i-1]){
            ans+=c[i];
            break;
        }*/
    }
    cout<<ans;
}
