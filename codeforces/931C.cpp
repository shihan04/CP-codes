#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=1e7,ans,mid;
    cin>>n;
    int x[n],a[3]={0},b[3]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
        m=min(m,x[i]);
    }
    for(int i=0;i<n;i++){
        if(x[i]==m) a[0]++;
        else if(x[i]==m+1) a[1]++;
        else a[2]++;
    }
    if(a[2]==0){
        cout<<n<<"\n";
        for(int i=0;i<n;i++) cout<<x[i]<<" ";
        return 0;
    }
    mid=a[1]-a[1]%2;
    ans=min(a[0]+a[2]+a[1]%2,n-2*min(a[0],a[2]));
    if(a[0]+a[2]+a[1]%2<=n-2*min(a[0],a[2])){
        b[1]=a[1]%2;
        b[0]=a[0]+mid/2;
        b[2]=a[2]+mid/2;
    }
    else{
        b[1]=a[1]+2*min(a[0],a[2]);
        b[0]=a[0]-min(a[0],a[2]);
        b[2]=a[2]-min(a[0],a[2]);
    }
    cout<<ans<<"\n";
    for(int i=0;i<b[0];i++) cout<<m<<" ";
    for(int i=0;i<b[1];i++) cout<<m+1<<" ";
    for(int i=0;i<b[2];i++) cout<<m+2<<" ";
}
