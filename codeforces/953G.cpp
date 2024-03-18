#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,e=0,o=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2) o++;
        else e++;
    }
    if(e>=o) cout<<o;
    else cout<<e+(o-e)/3;
}
