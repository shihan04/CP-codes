#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<(int)ceil((n-2)/3.0)*(int)ceil((m-2)/3.0)<<"\n";
    }
}
