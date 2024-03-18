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
    else{
        if((o-e)%3==0) cout<<e+(o-e)/3;
        else if(3-(o-e)%3<=e) cout<<e-3+(o-e)%3+((o-e)+3-(o-e)%3)/3;
        else cout<<0;
    }
}
