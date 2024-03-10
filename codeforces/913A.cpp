#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n;
    cin>>m;
    if(n>30){
        cout<<m;
        return 0;
    }
    a=1<<n;
    cout<<m%a;
}
