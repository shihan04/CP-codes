#include<bits/stdc++.h>
using namespace std;
int f(int n){
    int l=1;
    while(n!=1){
        if(n%2==1) n=3*n+1;
        else n/=2;
        l++;
    }
    return l;
}
int main()
{
    int i,j,m,_i,_j;
    while(cin>>i>>j){
        m=0;
        _i=i;_j=j;
        if(_i>_j) swap(_i,_j);
        for(int k=_i;k<=_j;k++) m=max(m,f(k));
        cout<<i<<" "<<j<<" "<<m<<"\n";
    }
}
