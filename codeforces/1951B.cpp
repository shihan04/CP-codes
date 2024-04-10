#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n+1],b[n+1],pa=1,pb=1,ma=0,mb=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        for(int i=1;i<k;i++){
            if(b[i]>b[k]){
                pb=i;
                break;
            }
        }
        swap(a[1],a[k]);
        swap(b[pb],b[k]);
        for(int i=2;i<=n&&a[i]<a[1];i++,ma++){}
        if(pb!=1){
            mb=1;
            for(int i=pb+1;i<=n&&b[i]<b[pb];i++,mb++){}
        }
        cout<<max(ma,mb)<<"\n";
    }
}
