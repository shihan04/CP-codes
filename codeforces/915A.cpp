#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        if(!(k%a[i])){
            cout<<k/a[i];
            return 0;
        }
    }
}
