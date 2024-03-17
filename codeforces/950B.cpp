#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,f1=0,f2=0,ans=0;
    cin>>n>>m;
    int x[n],y[m];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<m;i++){
        cin>>y[i];
    }
    for(int i=0,j=0;i<n||j<m;){
        if(f1==0){
            f1+=x[i];
            i++;
        }
        if(f2==0){
            f2+=y[j];
            j++;
        }
        if(f1<f2){
            f1+=x[i];
            i++;
        }
        if(f2<f1){
            f2+=y[j];
            j++;
        }
        if(f1==f2){
            ans++;
            f1=0;
            f2=0;
        }
    }
    cout<<ans;
}
