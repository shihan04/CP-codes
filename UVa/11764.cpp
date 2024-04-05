#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>n;
        int a[n],h=0,l=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
            h+=a[i]>a[i-1];
            l+=a[i]<a[i-1];
        }
        cout<<"Case "<<tc<<": "<<h<<" "<<l<<"\n";
    }
}
